/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-la-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 14:34:38 by cde-la-c          #+#    #+#             */
/*   Updated: 2022/01/17 15:51:06 by cde-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_hex(int num)
{
	char	*hex;

	hex = "0123456789abcdef";
	write(1, "\\", 1);
	write(1, &hex[num / 16], 1);
	write(1, &hex[num % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;
	int	hexx;

	i = 0;
	while (str[i])
	{
		if (str[i] >= ' ' && str[i] <= '~')
			write(1, &str[i], 1);
		else
			ft_print_hex(str[i]);
		i++;
	}
}
/*
#include <stdio.h>

int main (void)
{
	ft_putstr_non_printable("Coucou\ntu vas bien");
	write(1, "\n", 1);
	ft_putstr_non_printable("Coucou tu vas bie\t\v\0n");
	write(1, "\n", 1);
	ft_putstr_non_printable("");
}
*/
