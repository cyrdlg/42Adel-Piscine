/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-la-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 12:49:06 by cde-la-c          #+#    #+#             */
/*   Updated: 2022/01/24 13:01:49 by cde-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_fibonacci(int index)
{
	if (index > 1)
		return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
	else if (index == 1)
		return (1);
	else if (index == 0)
		return (0);
	return (-1);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("F(-1) = %d\n", ft_fibonacci(-1));
	printf("F(0) = %d\n", ft_fibonacci(0));
	printf("F(1) = %d\n", ft_fibonacci(1));
	printf("F(2) = %d\n", ft_fibonacci(2));
	printf("F(3) = %d\n", ft_fibonacci(3));
	printf("F(4) = %d\n", ft_fibonacci(4));
	return (0);
}
*/
