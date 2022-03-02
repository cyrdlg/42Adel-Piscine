/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-la-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:21:01 by cde-la-c          #+#    #+#             */
/*   Updated: 2022/01/20 20:00:50 by cde-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}
/*
#include <stdio.h>

int	main(void)
{
	printf(" (printed) should be 1\n");
	ft_putnbr(1);
	printf("\n (printed) should be 0\n");
	ft_putnbr(0);
	printf("\n (printed) should be -1\n");
	ft_putnbr(-1);
	printf("\n (printed) should be 2147483647\n");
	ft_putnbr(2147483647);
	printf("\n (printed) should be -21474836478\n");
	ft_putnbr(-2147483648);
	printf("\n (printed) should be 42\n");
	ft_putnbr(42);
	printf("\n");
	return (0);
}
*/
