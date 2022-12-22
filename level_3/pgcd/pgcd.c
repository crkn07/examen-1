/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 12:14:13 by crtorres          #+#    #+#             */
/*   Updated: 2022/12/21 12:23:06 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "stdlib.h"

int	main(int argc, char **argv)
{
	int nbr1 = atoi(argv[1]);
	int nbr2 = atoi(argv[2]);

	if (argc == 3)
	{
		if (nbr1 > 0 && nbr2 > 0)
		{
			while (nbr1 != nbr2)
			{
				if (nbr1 > nbr2)
					nbr1 -= nbr2;
				else
					nbr2 -= nbr1;
			}
			printf("%d", nbr1);
		}
	}
	printf("\n");
	return (0);
}