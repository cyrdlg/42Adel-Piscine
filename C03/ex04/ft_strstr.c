/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-la-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 11:03:37 by cde-la-c          #+#    #+#             */
/*   Updated: 2022/01/19 14:25:46 by cde-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{	
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>

char *ft_strstr(char *str, char *to_find);

int		main(void)
{
	char str[] = "012340123456789";
	char to_find1[] = "456";
	char to_find2[] = "987";
	char to_find_empty[] = "";



	printf("-----\n");
	printf("str = %s\n", str);
	printf("to_find = %s\n", to_find1);
	printf("%s\n", ft_strstr(str, to_find1));
	printf("to_find = %s\n", to_find2);
	printf("%s\n", ft_strstr(str, to_find2));
	printf("to_find = %s\n", to_find_empty);
	printf("%s\n", ft_strstr(str, to_find_empty));
	printf("-----\n");

	
	return (0);
}
*/
