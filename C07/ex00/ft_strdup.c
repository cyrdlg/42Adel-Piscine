/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-la-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 17:55:14 by cde-la-c          #+#    #+#             */
/*   Updated: 2022/01/25 18:25:12 by cde-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	dest = (char *) malloc (sizeof (char) * ft_strlen (src) + 1);
	if (dest)
	{
		i = 0;
		while (src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*test;
	char	*dup;

	test = "Testing strdup!";
	printf("test = %s\n", test);
	dup = ft_strdup(test);
	printf("dup  = %s\n", dup);
	free(dup);
}
*/