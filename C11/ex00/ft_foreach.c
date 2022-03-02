/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-la-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 11:10:01 by cde-la-c          #+#    #+#             */
/*   Updated: 2022/02/05 17:28:53 by cde-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
		f(tab[i++]);
}
/*
#include <stdlib.h>
#include <unistd.h>

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

int	main(void)
{
	int	i;
	int	*tab;
	int	length;

	length = 20;
	tab = malloc(length * sizeof(int));
	i = 0;
	while (i < length)
	{
		tab[i] = i;
		i++;
	}
	ft_foreach(tab, length, &ft_putnbr);
}
*/