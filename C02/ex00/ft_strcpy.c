/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-la-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 12:24:24 by cde-la-c          #+#    #+#             */
/*   Updated: 2022/01/17 15:52:01 by cde-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest [i] = src [i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char	source[] = "Forty two";
	char	destin[] = "Final Destination";
	char	*dest;

	printf("BEFORE\n\tsrc: %s\n\tdes: %s\n", source, destin);
	dest = ft_strcpy(destin, source);
	printf("AFTER\n\tsrc: %s\n\tdes: %s\n", source, dest);
	return (0);
}
*/
