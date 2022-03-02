/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmanson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 16:27:14 by jmanson           #+#    #+#             */
/*   Updated: 2022/01/16 18:50:11 by cde-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_write_to_table(int row, int col, int x, int y)
{
	if ((col == 1 && row == 1) || (col == x && row == y && col > 1 && row > 1))
		ft_putchar ('/');
	else if ((col == x && row == 1) || (col == 1 && row == y))
		ft_putchar ('\\');
	else if (row == 1 || row == y || col == 1 || col == x)
		ft_putchar ('*');
	else
		ft_putchar (' ');
}

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
			ft_write_to_table(row_nb, col_nb, x, y);
			col_nb++;
		}
		ft_putchar ('\n');
		row_nb++;
	}
}
