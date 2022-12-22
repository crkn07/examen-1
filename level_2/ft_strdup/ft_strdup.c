/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:51:12 by crtorres          #+#    #+#             */
/*   Updated: 2022/12/22 17:26:43 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

/**
 * It copies the string pointed to by src, including the terminating null byte
 * ('\0'), to a buffer pointed to by dest.
 * 
 * @param src The string to be copied.
 * 
 * @return A pointer to a newly allocated space in memory, which contains a copy of
 * the string given as a parameter.
 */
char    *ft_strdup(char *src)
{
	int	i = 0;
	char *dest;

	while (src[i] != '\0')
		i++;
	dest = malloc(sizeof(char) * (i + 1));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

int main(int argc, char **argv)
{
    if(argc == 1)
    {
        printf("ft_strdup(\"\") = %s\n", ft_strdup(""));
        return(0);
    }
    printf("ft_strdup(\"%s\") = %s\n", argv[1], ft_strdup(argv[1]));
    return(0);
}