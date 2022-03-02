/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-la-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 11:01:48 by cde-la-c          #+#    #+#             */
/*   Updated: 2022/01/20 20:01:29 by cde-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_char_count(char *base, char c, int start)
{
	int	i;
	int	count;

	i = start;
	count = 0;
	while (base[i])
		if (base[i++] == c)
			count++;
	return (count);
}

int	ft_ver_base(char *base)
{
	int	i;
	int	c;

	i = 0;
	while (base[i])
	{
		c = base[i];
		if (c == '+' || c == '-')
			return (0);
		if (ft_char_count(base, c, i) > 1)
			return (0);
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

void	ft_base_convert(int nbr, char *base, int size)
{
	unsigned int	n;
	char			a;

	if (nbr < 0)
	{
		write(1, "-", 1);
		n = nbr * (-1);
	}
	else
		n = nbr;
	if (n >= (unsigned int)size)
		ft_base_convert(n / size, base, size);
	a = base[n % size];
	write(1, &a, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_size;

	base_size = ft_ver_base(base);
	if (base_size)
	{
		ft_base_convert(nbr, base, base_size);
	}
}
/*
#include <stdio.h>

int	main(void)
{
	ft_putnbr_base(-12, "01");
	printf("\n");
	ft_putnbr_base(40, "poneyvif");
	printf("\n");
	ft_putnbr_base(894867, "0123456789");
	printf("\n");
	ft_putnbr_base(53, "0123456789abcdef");
	printf("\n");
	return (0);
}
*/
