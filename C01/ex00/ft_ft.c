/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-la-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 14:50:54 by cde-la-c          #+#    #+#             */
/*   Updated: 2022/01/13 17:25:38 by cde-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
/*
#include <stdio.h>
int	main(void)
{
	int	*nbr;
	int	number;

	nbr = &number;
	ft_ft(nbr);
	printf("number is equal to %d", number);
	return (0);
}
*/
