/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-la-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 13:44:43 by cde-la-c          #+#    #+#             */
/*   Updated: 2022/01/24 13:52:57 by cde-la-c         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	int	sol;

	sol = nb;
	while (!ft_is_prime(sol))
		sol++;
	return (sol);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("Next closest prime to -914 is: %d\n", ft_find_next_prime(-914));
	printf("Next closest prime to 400155 is: %d\n", ft_find_next_prime(400155));
	printf("Next closest prime to 0 is: %d\n", ft_find_next_prime(0));
	printf("Next closest prime to 2 is: %d\n", ft_find_next_prime(2));
	printf("Next closest prime to 3 is: %d\n", ft_find_next_prime(3));
	printf("Next closest prime to 4 is: %d\n", ft_find_next_prime(4));
	printf("Next closest prime to 89 is: %d\n", ft_find_next_prime(89));
	printf("Next closest prime to 388046 is: %d\n", ft_find_next_prime(388046));
	return (0);
}
*/