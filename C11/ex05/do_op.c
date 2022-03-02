/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-la-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 12:35:23 by cde-la-c          #+#    #+#             */
/*   Updated: 2022/02/05 14:27:03 by cde-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int		ft_atoi(char *str);
void	ft_putnbr(int nbr);

int	do_op(int num1, int num2, char *op)
{
	if (op[1] != 0)
		return (0);
	else if (*op == '+')
		return (num1 + num2);
	else if (*op == '-')
		return (num1 - num2);
	else if (*op == '/')
		return (num1 / num2);
	else if (*op == '*')
		return (num1 * num2);
	else if (*op == '%')
		return (num1 % num2);
	return (0);
}

int	main(int ac, char **av)
{
	int		nb1;
	int		nb2;
	char	op;

	nb1 = ft_atoi(av[1]);
	nb2 = ft_atoi(av[3]);
	op = av[2][0];
	if (ac == 4)
	{
		if (nb2 == 0)
		{
			if (op == '/')
			{
				write(1, "Stop : division by zero\n", 24);
				return (0);
			}
			else if (op == '%')
			{
				write(1, "Stop : modulo by zero\n", 22);
				return (0);
			}
		}
		ft_putnbr(do_op(nb1, nb2, av[2]));
	}
	return (write(1, "\n", 1));
}
