/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-la-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 15:18:31 by cde-la-c          #+#    #+#             */
/*   Updated: 2022/01/17 15:55:51 by cde-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 'a' + 'A';
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char lowercase[] = "abcdefghijklmnopqrstuvwxyz";
	char *p_lwr;
	p_lwr = lowercase;

	char allcases[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *p_all;
	p_all = allcases;

	char empty[] = "";
	char *p_emp;
	p_emp = empty;

	printf("\n-----\n%s = ", lowercase);
	printf("%s\n", ft_strupcase(p_lwr));
	printf("%s = ", allcases);
	printf("%s\n", ft_strupcase(p_all));
	printf("Empty = %s\n-----\n", ft_strupcase(p_emp));
	return (0);
}
*/
