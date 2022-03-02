/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-la-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 23:39:34 by cde-la-c          #+#    #+#             */
/*   Updated: 2022/01/31 17:24:41 by cde-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write (1, &str[i++], 1);
	write (1, "\n", 1);
}

void	ft_putnbr(int nb)
{
	int	nbr;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	nbr = nb;
	if (nb < 0)
	{
		nbr = -nbr;
		write(1, "-", 1);
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		write(1, &"0123456789"[nb % 10], 1);
	}
	else
		write(1, &"0123456789"[nb % 10], 1);
}

void	ft_show_s_stock_str(struct s_stock_str t_stock)
{
	ft_putstr(t_stock.str);
	ft_putnbr(t_stock.size);
	write (1, "\n", 1);
	ft_putstr(t_stock.copy);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str)
		ft_show_s_stock_str (par[i++]);
}
/*
#include "../ex04/ft_strs_to_tab.c"

int	main(int argc, char **argv)
{
	ft_show_tab(ft_strs_to_tab(argc, argv));
}
*/