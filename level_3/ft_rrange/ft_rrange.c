/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:57:22 by crtorres          #+#    #+#             */
/*   Updated: 2023/01/25 17:58:47 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>


int		*ft_rrange(int start, int end)
{
	int		i;
	int		*res;
	int		copy_start;
	int		copy_end;

	copy_start = start;
	copy_end = end;
	if (start <= end)
		i = end - start + 1;
	if (start >= end)
		i = start - end + 1;
	res = (int *)malloc(sizeof(int *) * i);
	i = 0;
	while (copy_start <= copy_end)
		res[i++] = copy_end--;
	while (copy_start >= copy_end)
			res[i++] = copy_end++;
	return (res);
}

int main()
{
    int *range1 = ft_rrange(1, 3); // returns [1, 2, 3]
    int *range2 = ft_rrange(-1, 2); // returns [-1, 0, 1, 2]
    int *range3 = ft_rrange(0, 0); // returns [0]
    int *range4 = ft_rrange(1, -3); // returns [-3, -2, -1, 0, 1]
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
}