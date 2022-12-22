/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 14:57:42 by crtorres          #+#    #+#             */
/*   Updated: 2022/12/12 18:40:08 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/**
 * It takes a string as an argument, and prints it in reverse
 * 
 * @param argc argument count
 * @param argv argument vector
 */
int main(int argc, char **argv)
{
	int i = 0;

	if (argc == 2)
	{
		while(argv[1][i]) 
		{
			/* Checking if the character is between A and Z. */
			if(argv[1][i] >= 65 && argv[1][i] <= 90)
			{	
				argv[1][i] = 90 - argv[1][i] + 65;
			}
			/* Checking if the character is between a and z. */
			else if (argv[1][i] >= 97 && argv[1][i] <= 122)
			{
				argv[1][i] = 122 - argv[1][i] + 97;
			}
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write (1,"\n",1);
}