/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-la-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 11:30:44 by cde-la-c          #+#    #+#             */
/*   Updated: 2022/02/05 17:29:40 by cde-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < length)
	{
		if (f(tab[i++]) != 0)
			count++;
	}
	return (count);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	ft(char *str)
{
	if (*str == 'A')
		return (1);
	return (0);
}

int	main(void)
{
	char	**array;

	array = malloc(3 * sizeof(char *));
	array[0] = "A";
	array[1] = "Z";
	array[2] = "A";
	array[3] = "NULL";
	printf("%d\n", ft_count_if(array, 3, ft));
}
*/