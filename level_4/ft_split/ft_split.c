/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 12:44:17 by crtorres          #+#    #+#             */
/*   Updated: 2022/12/21 18:38:44 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

/* Creating a function that takes a string as an argument and returns a pointer to
a pointer of a char. */
char		**ft_split(char *str)
{
	int		i = 0;
	int		j;
	int		k = 0;
	char	**split;
	/* This is allocating memory for the array of pointers. */
	if (!(split = (char **)malloc(sizeof(char *) * 256)))
		return (NULL);
	/* This is skipping the spaces, tabs and new lines. */
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	/* Checking if the string is not empty. */
	while (str[i])
	{
		j = 0;
		/* Allocating memory for the array of pointers. */
		if (!(split[k] = (char *)malloc(sizeof(char) * 4096)))
			return (NULL);
		/* This is checking if the string is not empty. */
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i])
			/* Assigning the value of str[i] to split[k][j] and then incrementing both i and
			j. */
			split[k][j++] = str[i++];
		/* This is skipping the spaces, tabs and new lines. */
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		/* Assigning the value of '\0' to split[k][j]. */
		split[k][j] = '\0';
		k++;
	}
	/* Assigning the value of NULL to split[k]. */
	split[k] = NULL;
	return (split);
}

int main(int argc, char **argv)
{
	char	**split;
	int		i;

	if (argc == 2)
	{
		split = ft_split(argv[1]);
			printf("%s ", split[0]);
		i = 1;
		while (split[i] != 0)
		{
			printf("%s ", split[i]);
			i++;
		}
		printf("%s", split[i]);
	}
	printf("\n");
    return (0);
}