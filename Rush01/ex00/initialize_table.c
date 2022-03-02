/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize_table.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-la-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 22:37:44 by cde-la-c          #+#    #+#             */
/*   Updated: 2022/01/23 18:47:09 by cde-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	ini_table(int **table, int n, int m)
{
	int	i;

	i = 0;
	while (i < n)
	{
		table[i] = (int *) malloc (sizeof(int) * m);
		++i;
	}
}

void	free_table(int **table, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		free(table[i]);
		++i;
	}
	free(table);
}

int	finish_correct_recursion(int *table)
{
	free(table);
	return (1);
}
