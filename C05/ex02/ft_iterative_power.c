/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-la-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 12:04:54 by cde-la-c          #+#    #+#             */
/*   Updated: 2022/01/24 12:39:33 by cde-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	res;

	if (power < 0)
		return (0);
	i = 1;
	res = 1;
	while (i++ <= power)
		res *= nb;
	return (res);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("0 to the power 0 = %d\n", ft_iterative_power(0, 0));
	printf("0 to the power 1 = %d\n", ft_iterative_power(0, 1));
	printf("1 to the power 5 = %d\n", ft_iterative_power(1, 5));
	printf("2 to the power 0 = %d\n", ft_iterative_power(2, 0));
	printf("2 to the power 2 = %d\n", ft_iterative_power(2, 2));
	printf("2 to the power -2 = %d\n", ft_iterative_power(2, -2));
	return (0);
}
*/
