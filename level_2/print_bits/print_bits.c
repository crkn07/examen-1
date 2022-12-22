/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 15:14:23 by crtorres          #+#    #+#             */
/*   Updated: 2022/12/19 15:46:49 by crtorres         ###   ########.fr       */
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
