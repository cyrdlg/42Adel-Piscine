/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-la-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 13:30:11 by cde-la-c          #+#    #+#             */
/*   Updated: 2022/01/24 13:43:07 by cde-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_prime(int nb)
{
	int	d;

	if (nb < 2)
		return (0);
	d = 2;
	while (d <= nb / d)
	{
		if (nb % d == 0)
			return (0);
		d++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("is 0 prime ? %d\n", ft_is_prime(0));
	printf("is 1 prime ? %d\n", ft_is_prime(1));
	printf("is 2 prime ? %d\n", ft_is_prime(2));
	printf("is 3 prime ? %d\n", ft_is_prime(3));
	printf("is 4 prime ? %d\n", ft_is_prime(4));
	printf("is 5 prime ? %d\n", ft_is_prime(5));
	printf("is 6 prime ? %d\n", ft_is_prime(6));
	printf("is 349663 prime ? %d\n", ft_is_prime(349663));
	return (0);
}
*/