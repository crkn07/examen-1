/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 15:56:15 by crtorres          #+#    #+#             */
/*   Updated: 2022/12/22 17:00:30 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i] != '\0')
			i++;
		i--;
		while ((av[1][i] == ' ' || av[1][i] == '\t') && i != 0)
			i--;	
		/* Checking if the character is not a space or tab and if it is not the first
		character. */
		while (av[1][i] != ' ' && av[1][i] != '\t'  && i != 0)
			i--;
		/* Checking if the character is a space or tab and if it is not the first
		character. */
		if (av[1][i] == ' ' || av[1][i] == '\t')
			i++;
		/* Checking if the character is not a space or tab and if it is not the last
		character. */
		while (av[1][i] != '\0' && av[1][i] != ' ' && av[1][i] != '\t')
		{	
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}