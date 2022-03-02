/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-la-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 11:18:43 by cde-la-c          #+#    #+#             */
/*   Updated: 2022/02/05 17:29:20 by cde-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*res;

	if (length <= 0)
		return (NULL);
	res = (int *) malloc (length * sizeof (int));
	if (!res)
		return (NULL);
	i = 0;
	while (i < length)
	{
		res[i] = f(tab[i]);
		i++;
	}
	return (res);
}
/*
#include <stdio.h>

int	ft_mul(int a)
{
	return (a * 2);
}

int	main(void)
{
	int	i;
	int	*tab;
	int	length;
	int	*res;

	length = 10;
	tab = malloc(length * sizeof(int));
	i = 0;
	while (i < length)
	{
		tab[i] = i;
		i++;
	}
	res = ft_map(tab, length, &ft_mul);
	i = 0;
	while (i < length)
	{
		printf("%i", res[i]);
		i++;
	}
}
*/