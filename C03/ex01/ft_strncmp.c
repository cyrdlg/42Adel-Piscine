/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-la-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 17:58:05 by cde-la-c          #+#    #+#             */
/*   Updated: 2022/01/20 19:16:47 by cde-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
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
	char *str1 = "Forty two";
	char *str2 = "Forty three";

	printf("ORIGINAL\n");
	printf("Forty two vs Forty three = %d\n", strncmp(str1, str2, 5));
	printf("Forty two vs Forty three = %d\n", strncmp(str1, str2, 9));
	printf("42 vs 42 = %d\n", strncmp("42", "42", 2));
	printf("ft_strcmp\n");
	printf("Forty two vs Forty three = %d\n", ft_strncmp(str1, str2, 5));
	printf("Forty two vs Forty three = %d\n", ft_strncmp(str1, str2, 9));
	printf("42 vs 42 = %d\n", ft_strncmp("42", "42", 2));
	return (0);
}
*/
