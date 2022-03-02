/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-la-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 12:40:12 by cde-la-c          #+#    #+#             */
/*   Updated: 2022/01/24 12:45:55 by cde-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power > 0)
		return (nb * ft_recursive_power(nb, power - 1));
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("0 to the power 0 = %d\n", ft_recursive_power(0, 0));
	printf("0 to the power 1 = %d\n", ft_recursive_power(0, 1));
	printf("1 to the power 5 = %d\n", ft_recursive_power(1, 5));
	printf("2 to the power 0 = %d\n", ft_recursive_power(2, 0));
	printf("2 to the power 2 = %d\n", ft_recursive_power(2, 2));
	printf("2 to the power -2 = %d\n", ft_recursive_power(2, -2));
	return (0);
}
*/
