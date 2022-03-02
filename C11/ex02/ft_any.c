/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-la-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 11:28:13 by cde-la-c          #+#    #+#             */
/*   Updated: 2022/02/05 17:29:28 by cde-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char *))
{
	int	i;

	i = 0;
	while (tab[i])
	{
		if (f(tab[i++]) != 0)
			return (1);
	}
	return (0);
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
	int		i;

	i = 0;
	array = malloc(3 * sizeof(char *));
	array[0] = "A";
	array[1] = "Z";
	array[2] = NULL;
	while (i < 3)
	{
		printf("%d\n", ft_any(&array[i], ft));
		i++;
	}
}
*/