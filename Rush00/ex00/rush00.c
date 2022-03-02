/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-la-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 15:46:27 by cde-la-c          #+#    #+#             */
/*   Updated: 2022/01/15 16:06:10 by cde-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	row_nb;
	int	col_nb;

	row_nb = 1;
	while (row_nb <= y && x > 0 && y > 0)
	{
		col_nb = 1;
		while (col_nb <= x)
		{
			if ((row_nb == 1 || row_nb == y) && (col_nb == 1 || col_nb == x))
				ft_putchar ('o');
			else if (row_nb == 1 || row_nb == y)
				ft_putchar ('-');
			else if (col_nb == 1 || col_nb == x)
				ft_putchar ('|');
			else
				ft_putchar (' ');
			col_nb++;
		}
		write(1, "\n", 1);
		row_nb++;
	}
}
