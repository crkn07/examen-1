/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 13:23:03 by crtorres          #+#    #+#             */
/*   Updated: 2022/12/09 14:01:58 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

int	main(int argc, char **argv)
{
	int	start;
	int	end;
	int	i = 0;
	
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
			i++;
		while (i >= 0)
		{	
			while (argv[1][i] == '\0' || argv[1][i] == ' ' || argv[1][i] == '\t')
				i--;
			end = i;
			while (argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
				i--;
			start = i + 1;
			int	flag;
			flag = start;
			while (start <= end)
				write (1, &argv[1][start++], 1);
			if (flag != 0)
			{
				write(1, " ", 1);
			}
		}
	}
	write(1, "\n", 1);
}