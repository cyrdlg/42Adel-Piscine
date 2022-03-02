/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-la-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 11:27:12 by cde-la-c          #+#    #+#             */
/*   Updated: 2022/01/24 19:25:37 by cde-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	res;

	if (nb >= 0)
	{
		i = 1;
		res = 1;
		while (i++ < nb)
			res *= i;
		return (res);
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("Factorial -50 = %d\n", ft_iterative_factorial(-50));
	printf("Factorial 0 = %d\n", ft_iterative_factorial(0));
	printf("Factorial 1 = %d\n", ft_iterative_factorial(1));
	printf("Factorial 2 = %d\n", ft_iterative_factorial(2));
	printf("Factorial 3 = %d\n", ft_iterative_factorial(3));
	printf("Factorial 12 = %d\n", ft_iterative_factorial(12));
	return (0);
}
*/