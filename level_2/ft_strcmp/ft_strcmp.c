/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 15:47:04 by crtorres          #+#    #+#             */
/*   Updated: 2022/12/09 15:46:48 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

/**
 * The function ft_strcmp() compares the two strings s1 and s2. It returns an
 * integer less than, equal to, or greater than zero if s1 is found, respectively,
 * to be less than, to match, or be greater than s2
 * 
 * @param s1 The first string to be compared.
 * @param s2 The string to be compared to s1.
 * 
 * @return The difference between the two strings.
 */
int ft_strcmp(char *s1, char *s2)
{
	int i = 0;
	
	/* Comparing the two strings character by character until it finds a difference. */
	while(s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}	


int main(int argc, char **argv)
{
    if (argc == 3)
        printf("ft_strcmp(\"%s\", \"%s\") = %d\n", argv[1], argv[2], ft_strcmp(argv[1], argv[2]));
    return(0);
}