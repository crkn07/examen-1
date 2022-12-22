/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 11:38:18 by crtorres          #+#    #+#             */
/*   Updated: 2022/12/19 12:16:58 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

int	main(int argc, char const **argv)
{
	int	i = 0;
	int	j = 0;
	
	if (argc == 3)
	{
		while (argv[2][j])
			if (argv[2][j++] == argv[1][i])
				i ++;
		if (!argv[1][i] && !argv[2][j])
		{
			i = 0;
			while (argv[1][i])
				write(1, &argv[1][i++], 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}
