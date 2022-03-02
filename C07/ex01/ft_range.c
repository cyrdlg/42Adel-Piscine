/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-la-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 18:26:10 by cde-la-c          #+#    #+#             */
/*   Updated: 2022/02/01 16:00:32 by cde-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	if (min >= max)
	{
		return (NULL);
	}
	range = (int *)malloc((max - min) * sizeof(int));
	i = 0;
	while (i < (max - min))
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}

/*
#include <stdio.h>

int	main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	i = 0;
	int	size;

	min = -5;
	max = -1;
	size = max - min;
	tab = (int *) malloc (sizeof(int) * size);
	tab = ft_range (min, max);
	while (i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
	free(tab);
	return (0);
}
*/