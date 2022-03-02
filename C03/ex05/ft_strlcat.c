/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-la-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 12:07:10 by cde-la-c          #+#    #+#             */
/*   Updated: 2022/01/20 19:17:14 by cde-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	i = 0;
	while (src[i] && dest_len + i < (size - 1))
	{
		dest[i + dest_len] = src[i];
		i++;
	}
	if (i < size)
		dest[dest_len + i] = '\0';
	if (dest_len > size)
		return (src_len + size);
	return (dest_len + src_len);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char			dest0[16] = "Destination: ";
	char			dest1[16] = "Destination: ";
	char			src[28] = "Concatenating stuff forever";
	unsigned int	size1 = 100;
	unsigned int	size2 = 100;	

	size1 = ft_strlcat(dest0, src, 0);
	size2 = strlcat(dest1, src, 0);
	printf("String final: %s, Size: %d\n", dest0, size1);
	printf("String final: %s, Size: %d\n", dest1, size2);
	return(0);
}
*/
