/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_management.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-la-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 16:52:12 by cde-la-c          #+#    #+#             */
/*   Updated: 2022/01/23 19:02:07 by cde-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);
void	ft_putinta(int *arr, int size);
void	ini_table(int **table, int n, int m);
void	print_grid(int **grid, int n, int m);

/* 
 * INPUT: 
 * Takes an input string, the size of the input array and a pointer to the input 
 * array variable.
 * 
 * ACTIONS:
 * Checks that the string given by the user is a valid input
 * Converts the input string into ints and stores them in the input array
 *
 * RETURNS:
 * If the string is not a valid input, returns 0
 * Otherwise returns 1
*/

int	decode_input(char *inputstr, int inputlen, int **inputarr)
{
	int	i;
	int	j;
	int	size;

	i = 0;
	j = 0;
	size = inputlen / 4;
	while (inputstr[i])
	{
		if (i % 2 == 0 && inputstr[i] > '0' && inputstr[i] <= size + '0')
		{
			inputarr[j / size][j % size] = inputstr[i] - '0';
			j++;
		}
		else if (i % 2 == 0)
			return (0);
		i++;
	}
	return (1);
}

/* 
 * INPUT: 
 * Takes argc and argv from the main, a pointer to the tabsize variable and a 
 * pointer to the input array.
 * 
 * ACTIONS:
 * Checks that the string given by the user is a valid input candidate
 * Allocates the correct amount of memory to the input array
 * Passes the user's input string, the length of the input array and the pointer 
 * to the decode function
 * Stores the size of the grid through the tabsize pointer
 *
 * RETURNS:
 * If the string is not a valid candidate, returns 0
 * Otherwise returns the result of the decode function
*/

int	get_input(int argc, char **argv, int *tabsize, int ***input)
{
	int	inputlen;

	if (argc == 2)
	{
		inputlen = ft_strlen(argv[1]);
		if (inputlen % 2 == 1 && ((inputlen / 2 + 1) % 4 == 0) && inputlen > 0)
		{
			inputlen = inputlen / 2 + 1;
			*tabsize = inputlen / 4;
			*input = (int **) malloc (sizeof(int *) * 4);
			ini_table(*input, 4, *tabsize);
			return (decode_input(argv[1], inputlen, *input));
		}
	}
	return (0);
}
