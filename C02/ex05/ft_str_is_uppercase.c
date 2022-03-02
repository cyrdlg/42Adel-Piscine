/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-la-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 14:16:05 by cde-la-c          #+#    #+#             */
/*   Updated: 2022/01/17 16:31:44 by cde-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int		main(void)
{
	char uppercase[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *p_upr;
	p_upr = uppercase;

	char special[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_";
	char *p_spe;
	p_spe = special;

	char empty[] = "";
	char *p_emp;
	p_emp = empty;

	printf("-----\n");
	printf("1 = String contains only uppercase chars\n");
	printf("0 = String doesn't contain only uppercase chars\n");
	printf("%s = %d\n", uppercase, ft_str_is_uppercase(p_upr));
	printf("%s = %d\n", special, ft_str_is_uppercase(p_spe));
	printf("Empty = %d\n-----\n", ft_str_is_uppercase(p_emp));

	return (0);
}
*/
