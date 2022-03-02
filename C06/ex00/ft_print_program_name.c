/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-la-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 16:28:00 by cde-la-c          #+#    #+#             */
/*   Updated: 2022/01/24 16:35:22 by cde-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	len;

	len = 0;
	if (argc > 0)
	{
		while (argv[0][len])
		{
			write(1, &argv[0][len], 1);
			len++;
		}
	}
	write(1, "\n", 1);
	return (0);
}