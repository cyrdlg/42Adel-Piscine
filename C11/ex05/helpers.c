/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-la-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 12:51:47 by cde-la-c          #+#    #+#             */
/*   Updated: 2022/02/05 13:39:01 by cde-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	sign = 1;
	res = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (str[i] - '0') + (res * 10);
		i++;
	}
	return (res * sign);
}

void	ft_putnbr(int nbr)
{
	int	sign;

	sign = 1;
	if (nbr == -2147483648)
	{	
		write(1, "-2147483648", 11);
		return ;
	}
	if (nbr < 0)
	{
		nbr = -nbr;
		write (1, "-", 1);
	}
	if (nbr > 9)
		ft_putnbr(nbr / 10);
	write (1, &"0123456789"[nbr % 10], 1);
}
