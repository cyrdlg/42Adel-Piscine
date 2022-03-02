/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-la-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 16:04:50 by cde-la-c          #+#    #+#             */
/*   Updated: 2022/01/27 16:04:54 by cde-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_is_charset(char str, char *charset)
{
	while (*charset)
	{
		if (str == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	ft_wordlen(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && ft_is_charset(str[i], charset) == 0)
		i++;
	return (i);
}

int	ft_wordcount(char *str, char *charset)
{
	int	i;
	int	j;

	j = 0;
	while (*str)
	{
		while (*str && ft_is_charset(*str, charset) == 1)
			str++;
		i = ft_wordlen(str, charset);
		str += i;
		if (i)
			j++;
	}
	return (j);
}

char	*ft_strcpy(char *src, int j)
{
	char	*dst;
	int		i;

	i = 0;
	dst = malloc((j + 1) * sizeof(char));
	if (!dst)
		return (0);
	while (i < j && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char	**ft_split(char *str, char *charset)
{
	char		**dest;
	int			size;
	int			i;
	int			j;

	i = 0;
	size = ft_wordcount(str, charset);
	dest = malloc((size + 1) * sizeof(char *));
	if (!dest)
		return (0);
	while (i < size)
	{
		while (ft_is_charset(*str, charset))
			str++;
		j = ft_wordlen(str, charset);
		dest[i] = ft_strcpy(str, j);
		str += j;
		i++;
	}
	dest[size] = 0;
	return (dest);
}
/*
#include <stdbool.h>
#include <stdio.h>

int		main(int argc, char **argv)
{
	int		index;
	char	**split;

	//argc = argc + 0;
	//printf("count occ: %d\n", count_occur("  a  b   b   ", " a   "));
	split = ft_split("ImtmVrV6Ov8QrkGGUglBy7Vgsu iIsdl5XyT35Czv4xeu", "yenORYQ");
	//split = ft_split(argv[1], argv[2]);
	index = 0;
	printf("tab start\n");
	while (split[index])
	{
		printf("tab[%d]: $%s$\n", index, split[index]);
		fflush(stdout);
		index++;
	}
	printf("tab end\n");
}
*/