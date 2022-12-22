/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 13:44:00 by crtorres          #+#    #+#             */
/*   Updated: 2022/12/15 16:11:22 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"
#include "stdio.h"
#include "flood_fill.h"

/**
 * It takes a 2D array of characters, a size, a current position, and a character
 * to fill, and fills the 2D array with the character to fill, starting at the
 * current position
 * 
 * @param tab the 2D array of characters
 * @param size the size of the map
 * @param cur the current position of the cursor
 * @param to_fill the character to fill the area with
 * 
 * @return the number of times the character c appears in the string str.
 */
void	fill(char **tab, t_point size, t_point cur, char to_fill)
{
	/* Checking if the current position is out of bounds or if the current position is
	not the same as the character to fill. */
	if (cur.y < 0 || cur.y >= size.y || cur.x < 0 || cur.x >= size.x
		|| tab[cur.y][cur.x] != to_fill)
		return;

	/* Changing the current position to 'F' */
	tab[cur.y][cur.x] = 'F';
/* Checking the four adjacent positions to the current position. */
	fill(tab, size, (t_point){cur.x - 1, cur.y}, to_fill);
	fill(tab, size, (t_point){cur.x + 1, cur.y}, to_fill);
	fill(tab, size, (t_point){cur.x, cur.y - 1}, to_fill);
	fill(tab, size, (t_point){cur.x, cur.y + 1}, to_fill);
}

/* char** make_area(char** zone, t_point size)
{
	char** new;
	new = malloc(sizeof(char*) * size.y);
	for (int i = 0; i < size.y; ++i)
	{
		new[i] = malloc(size.x + 1);
		for (int j = 0; j < size.x; ++j)
			new[i][j] = zone[i][j];
		new[i][size.x] = '\0';
	}
	return new;
}
int main(void)
{
	t_point size = {8, 5};
	char *zone[] = {
		"11111111",
		"10001001",
		"10010001",
		"10110101",
		"11100001",
	};
	char**  area = make_area(zone, size);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	printf("\n");
	t_point begin = {0, 0};
	flood_fill(area, size, begin);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	return (0);
} */