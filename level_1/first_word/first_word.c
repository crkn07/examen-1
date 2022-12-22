/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 12:49:13 by crtorres          #+#    #+#             */
/*   Updated: 2022/12/12 12:54:29 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

int	main(int argc, char **argv)
{
	int	i = 0;
	
	if (argc == 2)
	{
		while (argv[1][i] == 32 || argv[1][i] == 9)
			i++;
		while ((argv[1][i] != 32 && argv[1][i] != 9) && argv[1][i])
		{
			write(1, &argv[1][i], 1);
			i++;
		}
		
	}
	write(1, "\n", 1);
}