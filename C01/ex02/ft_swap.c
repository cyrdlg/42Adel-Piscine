/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-la-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 12:44:51 by cde-la-c          #+#    #+#             */
/*   Updated: 2022/01/13 17:59:54 by cde-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/*
#include <stdio.h>
int	main(void)
{
	int	var_a;
	int	*p_a;
	int	var_b;
	int	*p_b;

	p_a = &var_a;
	p_b = &var_b;
	var_a = 1;
	var_b = 2;
	printf ("a = %d, b = %d\n", var_a, var_b);
	printf ("The ol' swapperoo\n");
	ft_swap(p_a, p_b);
	printf ("a = %d, b = %d\n", var_a, var_b);
	return (0);
}
*/
