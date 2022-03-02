/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-la-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 14:08:42 by cde-la-c          #+#    #+#             */
/*   Updated: 2022/01/17 16:30:36 by cde-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int		main(void)
{
	char lowercase[] = "abcdefghijklmnopqrstuvwxyz";
	char *p_lwr;
	p_lwr = lowercase;

	char special[] = "abcdefghijklmnopqrstuvwxyz_";
	char *p_spe;
	p_spe = special;

	char empty[] = "";
	char *p_emp;
	p_emp = empty;

	printf("-----\n");
	printf("1 = String contains only lowercase chars\n");
	printf("0 = String doesn't contain only lowercase chars\n\n");
	printf("%s = %d\n", lowercase, ft_str_is_lowercase(p_lwr));
	printf("%s = %d\n", special, ft_str_is_lowercase(p_spe));
	printf("Empty = %d\n-----\n", ft_str_is_lowercase(p_emp));

	return (0);
}
*/
