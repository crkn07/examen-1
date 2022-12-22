/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 16:08:38 by crtorres          #+#    #+#             */
/*   Updated: 2022/12/14 16:18:00 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * We set a variable i to 8, and then we loop through the octet, dividing it by 2
 * each time, and adding the remainder to the result
 * 
 * @param octet The octet to reverse.
 * 
 * @return the reverse of the bits of the octet.
 */
unsigned char	reverse_bits(unsigned char octet)
{
	int		i = 8;
	unsigned char	res = 0;

	while (i > 0)		/* Looping through the octet, dividing it by 2 each time, and adding the remainder to the result. */
	{
		res = res * 2 + (octet % 2);	/* Adding the remainder of the octet divided by 2 to the result. */
		octet = octet / 2;
		i--;
	}
	return (res);
}

/* #include "unistd.h"

int	main(void)
{
	unsigned char c;

	c = '.';
	write(1, &c, 1);
	write(1, "\n", 1);
	c = reverse_bits(c);
	write(1, &c, 1);
	write(1, "\n", 1);
	c = reverse_bits(c);
	write(1, &c, 1);
	write(1, "\n", 1);
	c = reverse_bits(c);
	write(1, &c, 1);
	write(1, "\n", 1);
	return (0);
} */