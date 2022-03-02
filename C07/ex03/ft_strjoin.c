/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-la-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 20:45:44 by cde-la-c          #+#    #+#             */
/*   Updated: 2022/01/31 16:46:30 by cde-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_total_len(int size, char **strs, char *sep)
{
	int	i;
	int	total_len;
	int	sep_len;

	i = 0;
	sep_len = ft_strlen(sep);
	total_len = 0;
	while (i < size)
	{
		total_len += (ft_strlen(strs[i]) + sep_len * (i < (size - 1)));
		i++;
	}
	return (total_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		total_len;
	int		i;
	int		j;
	int		k;

	total_len = ft_total_len(size, strs, sep);
	res = malloc(total_len * sizeof (char));
	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != 0)
			res[k++] = strs[i][j++];
		j = 0;
		while (sep[j] != 0 && i < size - 1)
			res[k++] = sep[j++];
		i++;
	}
	res[k] = '\0';
	return (res);
}
/*
#include <stdio.h>

int	main(void)
{
	//int		index;
	char	**strs;
	char	*separator;
	char	*result;
	int		size;

	size = 3;
	strs = (char **)malloc(3 * sizeof(char *));
	strs[0] = (char *)malloc(sizeof(char) * (5 + 1));
	strs[1] = (char *)malloc(sizeof(char) * (7 + 1));
	strs[2] = (char *)malloc(sizeof(char) * (14 + 1));
	strs[0] = "Hello";
	strs[1] = "friend,";
	strs[2] = "you are awesome";
	separator = "42";
	result = ft_strjoin(size, strs, separator);
	printf("%s$\n", result);
	free(result);
}
*/