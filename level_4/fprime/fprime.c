/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:49:46 by crtorres          #+#    #+#             */
/*   Updated: 2022/12/05 18:10:30 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	/* The first prime number. */
	int i = 2;
	/* Converting the string to an integer. */
	int num = atoi(argv[1]);
	
	if (argc==2)
	{
		if (num ==1)
			printf("1");
		while(i <= num)
		{
			if (num % i == 0)
			{
				printf("%d", i);
				if (num == i)
					break;
				printf("*");
				num = num / i;
				i = 2;
			}
			i++;
		}
	}
	printf("\n");
}