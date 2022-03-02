/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-la-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 13:03:38 by cde-la-c          #+#    #+#             */
/*   Updated: 2022/01/24 19:43:40 by cde-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i * i <= nb && nb > 0 && i < 46341)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("sqrt(-3158) = %d\n", ft_sqrt(-3158));
	printf("sqrt(-1) = %d\n", ft_sqrt(-1));
	printf("sqrt(0) = %d\n", ft_sqrt(0));
	printf("sqrt(2) = %d\n", ft_sqrt(2));
	printf("sqrt(1640045925) = %d\n", ft_sqrt(1640045925));
	printf("sqrt(2147395600) = %d\n", ft_sqrt(2147395600));
	printf("sqrt(4) = %d\n", ft_sqrt(4));
	return (0);
}
*/