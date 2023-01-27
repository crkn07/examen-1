/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 15:14:23 by crtorres          #+#    #+#             */
/*   Updated: 2023/01/25 17:51:27 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	print_bits(unsigned char octet)
{
	int				i = 8;
	unsigned char	bit;

	while (i--)
	{
		bit = ((octet >> i) & 1) + '0';
		write(1, &bit, 1);
	}
}

/* int main(void)
{
	print_bits(5);
	write(1,"\n",1);
	return (0);
} */