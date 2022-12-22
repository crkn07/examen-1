/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 13:28:27 by crtorres          #+#    #+#             */
/*   Updated: 2022/12/19 13:46:06 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "unistd.h"
#include "stdlib.h"

int	main(int argc, char **argv)
{
	int	n1 = 0;
	int	n2 = 0;
	int	result = 0;

	if (argc == 4)
	{
		n1 = (atoi(argv[1]));
		n2 = (atoi(argv[3]));
		if (argv[2][0] == '+')
			result = n1 + n2;
		if (argv[2][0] == '-')
			result = n1 - n2;
		if (argv[2][0] == '/')
			result = n1 / n2;
		if (argv[2][0] == '*')
			result = n1 * n2;
		printf("%d\n", result);
	}
	else
		write(1, "\n", 1);
	return (0);
}