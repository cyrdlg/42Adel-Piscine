/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-la-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 19:18:42 by cde-la-c          #+#    #+#             */
/*   Updated: 2022/01/20 20:01:09 by cde-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	sign = 1;
	res = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (str[i] - '0') + (res * 10);
		i++;
	}
	return (res * sign);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*s = "   ---+--+01234506789ab567";

	printf("%d\n", ft_atoi(s));
	printf("%d\n", ft_atoi("      	---+--+2147--+-ab567"));
}
*/
