/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-la-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 14:52:41 by cde-la-c          #+#    #+#             */
/*   Updated: 2022/01/20 19:16:21 by cde-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	printf("ORIGINAL\n");
	printf("Forty two vs 42 = %d\n", strcmp("Forty two", "42"));
	printf("42 vs Forty two = %d\n", strcmp("42", "Forty two"));
	printf("42 vs 42 = %d\n", strcmp("42", "42"));
	printf("42 vs 42 = %d\n", strcmp("Forty two", "Forty"));
	printf("ft_strcmp\n");
	printf("Forty two vs 42 = %d\n", ft_strcmp("Forty two", "42"));
	printf("42 vs Forty two = %d\n", ft_strcmp("42", "Forty two"));
	printf("42 vs 42 = %d\n", ft_strcmp("42", "42"));
	printf("42 vs 42 = %d\n", strcmp("Forty two", "Forty"));

	return (0);
}
*/
