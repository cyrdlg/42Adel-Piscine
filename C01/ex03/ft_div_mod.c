/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-la-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 12:30:33 by cde-la-c          #+#    #+#             */
/*   Updated: 2022/01/13 17:31:15 by cde-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>
int	main(void)
{
	int	div;
	int	mod;
	int	*p_div;
	int	*p_mod;

	p_div = &div;
	p_mod = &mod;
	ft_div_mod (42, 10, p_div, p_mod);
	printf ("Divide 42 by 10:\n");
	printf ("div is equal to %d, mod is equal to %d", div, mod);
	return (0);
}
*/
