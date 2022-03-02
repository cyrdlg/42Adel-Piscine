/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-la-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 19:48:49 by cde-la-c          #+#    #+#             */
/*   Updated: 2022/01/30 17:01:03 by cde-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	if (min >= max)
		return (0);
	i = 0;
	arr = (int *) malloc (sizeof(int) * (max - min));
	while (i < max - min)
	{
		arr[i] = i + min;
		i++;
	}
	return (arr);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	*range = ft_range(min, max);
	if (*range == NULL)
	{
		*range = 0;
		return (0);
	}
	return (max - min);
}
/*
#include <stdio.h>

int		ft_ultimate_range(int **range, int min, int max);
void	test_ultimate_range_function(int min, int max);
void	print_test(int *test, int size);

int	main(void)
{
	test_ultimate_range_function(3, 5);
	test_ultimate_range_function(0, 11);
	test_ultimate_range_function(8, 2);
	test_ultimate_range_function(2, 2);
	test_ultimate_range_function(10, 20);
	test_ultimate_range_function(20, 15);
	test_ultimate_range_function(99, 99);
	test_ultimate_range_function(1, 12);
}

void	test_ultimate_range_function(int min, int max)
{
	int	size;
	int	*test;

	size = ft_ultimate_range(&test, min, max);
	printf("\nsize = %d\n", size);
	print_test(test, size);
	free(test);
}

void	print_test(int *test, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		printf("%d - ", test[i]);
		i++;
	}
	if (size > 0)
		printf("%d\n", test[size - 1]);
}
*/