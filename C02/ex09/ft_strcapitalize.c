/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-la-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 15:31:50 by cde-la-c          #+#    #+#             */
/*   Updated: 2022/01/17 17:20:27 by cde-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	capitalise;

	capitalise = 1;
	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9'))
		{
			if (capitalise && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] = str[i] - 32;
			else if (!capitalise && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] = str[i] + 32;
			capitalise = 0;
		}
		else
			capitalise = 1;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int		main(void)
{
	char str1[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	char str2[] = " sALuT, ComMenT tu VAS ? 42Mots QUarante-deUX; cinQuantE+ET+un";

	char empty[] = "";

	printf("\n-----\nBEF = %s", str1);
	printf("\nAFT = %s\n", ft_strcapitalize(str1));
	printf("\nBEF = %s", str2);
	printf("\nAFT = %s\n", ft_strcapitalize(str2));
	printf("\nEmpty = %s\n-----\n", ft_strcapitalize(empty));

	return (0);
}
*/
