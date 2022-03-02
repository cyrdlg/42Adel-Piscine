/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-la-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 16:48:58 by cde-la-c          #+#    #+#             */
/*   Updated: 2022/01/23 18:09:03 by cde-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putint(int n)
{
	char	c;

	c = n + '0';
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

void	print_grid(int **grid, int n, int m)
{
	int	i;
	int	j;

	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < m)
		{
			ft_putint (grid[i][j]);
			write (1, " ", 1);
			j++;
		}
		write (1, "\n", 1);
		i++;
	}
}
