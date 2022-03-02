/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-la-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 11:47:42 by cde-la-c          #+#    #+#             */
/*   Updated: 2022/01/24 12:04:15 by cde-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb > 1)
		return (nb * ft_recursive_factorial(nb - 1));
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("Factorial -50 = %d\n", ft_recursive_factorial(-50));
	printf("Factorial 0 = %d\n", ft_recursive_factorial(0));
	printf("Factorial 12 = %d\n", ft_recursive_factorial(12));
	printf("Factorial 1 = %d\n", ft_recursive_factorial(1));
	printf("Factorial 2 = %d\n", ft_recursive_factorial(2));
	printf("Factorial 3 = %d\n", ft_recursive_factorial(3));
	return (0);
}
*/