/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-la-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 13:59:54 by cde-la-c          #+#    #+#             */
/*   Updated: 2022/01/13 16:14:53 by cde-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;

	tmp = *a % *b;
	*a = *a / *b;
	*b = tmp;
}
/*
#include <stdio.h>
int main(void)
{
	int	var_a;
	int	var_b;
	int *p_a;
	int	*p_b;

	p_a = &var_a;
	p_b = &var_b;
	var_a = 42;
	var_b = 10;
	printf ("Divide a=42 by b=10:\n");
	ft_ultimate_div_mod (p_a, p_b);
	printf ("a = %d, b = %d", var_a, var_b);
}
*/
