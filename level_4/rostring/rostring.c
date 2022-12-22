/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 14:05:35 by crtorres          #+#    #+#             */
/*   Updated: 2022/12/15 17:26:56 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

int	main(int argc, char **argv)
{
	int	i = 0;
	int	start;
	int	end;
	int	flag = 0;

	if (argc > 1)
	{
		/* Skipping the spaces and tabs at the beginning of the string. */
		while (argv[1][i] == ' ' ||  argv[1][i] == '\t')
			i++;
		start = i;
		/* Finding the end of the first word. */
		while (argv[1][i] && (argv[1][i] != ' ' && argv[1][i] != '\t'))
			i++;
		end = i;
		/* Skipping the spaces and tabs at the beginning of the string. */
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		/* Printing the rest of the string after the first word. */
		while (argv[1][i] != '\0')
		{
			/* Used to check if there is a space after the first word. */
			flag = 1;
			/* Checking if there are two spaces in a row and if there are, it is skipping
			the second one. */
			while (argv[1][i] == ' ' && argv[1][i +1] == ' ')
				i++;
			write (1, &argv[1][i++], 1);
		}
		/* Adding a space after the first word. */
		if (flag == 1)
			write(1, " ", 1);
		/* Printing the first word. */
		while (start < end)
		{
			write (1, &argv[1][start++], 1);
		}
	}
	write(1, "\n", 1);
}

