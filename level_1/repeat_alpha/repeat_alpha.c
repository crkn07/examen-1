/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 13:16:04 by crtorres          #+#    #+#             */
/*   Updated: 2022/12/22 17:01:11 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

int	main(int argc, char **argv)
{
	int	i = 0;

	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 97 && argv[1][i] <= 122)
			{
				for (int j = 0; j < argv[1][i] - 96; j++)
					write(1, &argv[1][i], 1);
			}
			else if (argv[1][i] >= 65 && argv[1][i] <= 90)
			{
				for (int j = 0; j < argv[1][i] - 64; j++)
					write(1, &argv[1][i], 1);
			}
			else
				write(1, &argv[1][i], 1);
				i++;
		}
	}
	write(1, "\n", 1);
}