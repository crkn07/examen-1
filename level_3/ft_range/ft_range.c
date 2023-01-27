/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 13:59:46 by crtorres          #+#    #+#             */
/*   Updated: 2023/01/25 17:59:00 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>


/**
 * Ft_absolute_value returns the absolute value of the integer passed to it.
 * 
 * @param nbr the number to be converted to absolute value
 * 
 * @return The absolute value of the number.
 */
int	ft_absolute_value(int nbr)
{
	if (nbr < 0)
		return (-nbr);
	return (nbr);
}

int	*ft_range(int start, int end)
{
	/* A counter for the index of the array. */
	int	idx;
	int	size;
	/* Declaring a pointer to an integer. */
	int	*tab;

	idx = 0;
	size = ft_absolute_value(start - end);
	tab = (int *)malloc(sizeof(int) * size + 1);
	if (!tab)
		return (0);
	/* This is adding the numbers in the range to the array. */
	while (start < end)
	{
		tab[idx] = start;
		start++;
		idx++;
	}
	tab[idx] = start;
/* Adding the numbers in the range to the array in reverse order. */
	while (start > end)
	{
		tab[idx] = start;
		start--;
		idx++;
	}
	tab[idx] = start;
	/* Returning the pointer to the first element of the array. */
	return (tab);
}

/* int main()
{
    int *range1 = ft_range(1, 3); // returns [1, 2, 3]
    int *range2 = ft_range(-1, 2); // returns [-1, 0, 1, 2]
    int *range3 = ft_range(0, 0); // returns [0]
    int *range4 = ft_range(1, -3); // returns [1, 0, -1, -2, -3]
    // Print the elements of the range arrays
    printf("range1: [");
    for (int i = 0; i < 3; i++)
    {
        printf("%d, ", range1[i]);
    }
    printf("\b\b]\n");
    printf("range2: [");
    for (int i = 0; i < 4; i++)
    {
        printf("%d, ", range2[i]);
    }
    printf("\b\b]\n");
    printf("range3: [%d]\n", range3[0]);
    printf("range4: [");
    for (int i = 0; i < 5; i++)
    {
        printf("%d, ", range4[i]);
    }
    printf("\b\b]\n");
    // Free the memory allocated by malloc
    free(range1);
    free(range2);
    free(range3);
    free(range4);
    return 0;
} */