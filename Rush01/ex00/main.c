/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-la-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 14:13:04 by cde-la-c          #+#    #+#             */
/*   Updated: 2022/01/23 19:00:18 by cde-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		get_input(int argc, char **argv, int *tabsize, int ***inputarr);
int		sol_correct(int size, int **sol, int **input);
int		finish_correct_recursion(int *table);
void	ini_table(int **table, int n, int m);
void	print_grid(int **grid, int n, int m);
void	free_table(int **table, int n);

void	ini_possible_values(int size, int **sol, int index, int *possible_val)
{
	int	i;
	int	used_number;

	i = 0;
	while (i < size)
	{
		possible_val[i] = 1;
		++i;
	}
	i = index / size - 1;
	while (i >= 0)
	{
		used_number = sol[i][index % size];
		possible_val[used_number - 1] = 0;
		--i;
	}
	i = index % size - 1;
	while (i >= 0)
	{
		used_number = sol[index / size][i];
		possible_val[used_number - 1] = 0;
		--i;
	}
}

int	solve(int size, int **sol, int index, int **input)
{
	int	*possible_values;
	int	i;

	possible_values = (int *) malloc (sizeof(int) * size);
	ini_possible_values(size, sol, index, possible_values);
	i = 0;
	while (i < size)
	{
		if (possible_values[i])
		{
			sol[index / size][index % size] = i + 1;
			if (index == size * size - 1)
			{
				if (sol_correct(size, sol, input))
					return (finish_correct_recursion(possible_values));
			}
			else if (solve(size, sol, index + 1, input))
				return (finish_correct_recursion(possible_values));
		}
		++i;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	**input;
	int	size;
	int	**tab;

	if (get_input(argc, argv, &size, &input))
	{
		tab = (int **) malloc (sizeof(int *) * size);
		ini_table(tab, size, size);
		if (solve(size, tab, 0, input))
		{
			print_grid(tab, size, size);
			free_table(input, 4);
			free_table(tab, size);
		}
		else
			write(1, "Error\n", 6);
	}
	else
		write(1, "Error\n", 6);
	return (0);
}
