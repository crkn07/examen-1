/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 13:32:24 by crtorres          #+#    #+#             */
/*   Updated: 2022/12/12 13:39:37 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

int	main(int argc, char **argv)
{
	int	i = 0;

	if (argc == 2)
	{
		while (argv[1][i])
			i++;
		while (i)
			write(1, &argv[1][--i], 1);
	}
	write(1, "\n", 1);
	return (0);
}