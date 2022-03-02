/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-la-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 13:30:27 by cde-la-c          #+#    #+#             */
/*   Updated: 2022/01/17 15:52:27 by cde-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char			src[] = "Forty Two";
	char			dest[] = "Final Destination";
	unsigned int	n;

	n = 2;
	printf("BEFORE\n\tsrc: %s\n\tdes: %s\n", src, dest);
	ft_strncpy(dest, src, n);
	printf("AFTER\n\tsrc: %s\n\tdes: %s\n", src, dest);
	printf("BEFORE\n\tsrc: %s\n\tdes: %s\n", src, dest);
	ft_strncpy(dest, src, 15);
	printf("AFTER\n\tsrc: %s\n\tdes: %s\n", src, dest);
	return (0);
}
*/
