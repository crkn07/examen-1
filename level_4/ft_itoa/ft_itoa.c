/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 18:16:56 by crtorres          #+#    #+#             */
/*   Updated: 2022/12/09 17:57:03 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/**
 * *|CURSOR_MARCADOR|*
 * 
 * @param nbr the number to be converted
 * 
 * @return A string of the number.
 */
char    *ft_itoa(int nbr)
{
	int	len;
	long	n_tmp;
	char	*str;

	len = 0;								/* Initializing the length of the string. */
	n_tmp = nbr;							/* A temporary variable to store the value of `nbr` so that we can use it to calculate the length of the string. */
	str[len] ='\0';
	if (nbr == -2147483648)					/* Checking if the number is the minimum value of an integer. */
		return ("-2147483648");				/* If it is, it returns the string "-2147483648". */
	if (!(str = (char *)malloc(sizeof(char) * len + 1)))	/* Checking if the memory allocation was successful. */
		return (NULL);
	if (nbr == 0)							/* Checking if the number is 0. If it is, it returns the string "0". */
	{
		str[0] = '0';
		return (str);
	}
/* Checking if the number is negative. If it is, it is adding 1 to the length of
the string, multiplying the number by -1, and adding the character '-' to the
first position of the string. */
	if (nbr < 0)
	{
		len += 1;
		nbr *= -1;
		str[0] = '-';
	}
	/* Calculating the length of the string. */
	while (n_tmp)
	{
		n_tmp /= 10;
		len += 1;
	}
/* Converting the number into a string. */
	while (nbr)
	{
		/* Converting the number into a string. */
		str[--len] = (nbr % 10) + '0';
		/* Dividing the number by 10. */
		nbr /= 10;
	}
	return (str);
}