/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 15:30:40 by crtorres          #+#    #+#             */
/*   Updated: 2022/12/09 15:45:46 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int     ft_atoi(char *str)
{
	int result = 0;
	int sign = 1;

	/* Skipping the white spaces. */
	while (*str == ' ' || (*str >= 9 && *str <= 13))
        	str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		/* Converting the string to an integer. */
		result = result * 10 + *str - '0';
		str++;
	}
	return (sign * result);
}

int	main(void)
{
	int	result;
	result = ft_atoi("-42abc");
	printf("%d\n", result);
} 