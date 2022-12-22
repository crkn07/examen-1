/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 17:25:20 by crtorres          #+#    #+#             */
/*   Updated: 2022/11/29 17:29:12 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	while (n > 1)
	{
		if (n % 2 == 0)
			n = n / 2;
		else
			return (0);
	}
	return (1);
}

int	main(void)
{
	printf("%d\n", is_power_of_2(8));
	printf("%d\n", is_power_of_2(4));
	printf("%d\n", is_power_of_2(0));
	printf("%d\n", is_power_of_2(1));
}