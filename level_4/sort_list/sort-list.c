/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort-list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 14:26:59 by crtorres          #+#    #+#             */
/*   Updated: 2022/12/21 16:10:52 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "list.h"

/**
 * It takes a pointer to a list and a pointer to a function as parameters, and
 * returns a pointer to a list
 * 
 * @param lst the list to be sorted
 * @param cmp a pointer to a function that compares two integers.
 * 
 * @return the pointer to the first node of the list.
 */
t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	int	swap;
	t_list	*tmp;

	/* Saving the first node of the list in a temporary variable. */
	tmp = lst;
	/* Checking if the next node is NULL. */
	while(lst->next != NULL)
	{
		/* Calling the function cmp and passing the data of the current node and the next
		node. */
		if (((*cmp)(lst->data, lst->next->data)) == 0)
		{
			/* Swapping the data of the current node with the next node. */
			swap = lst->data;
			lst->data = lst->next->data;
			lst->next->data = swap;
			/* Resetting the pointer to the first node of the list. */
			lst = tmp;
		}
		/* Moving the pointer to the next node. */
		else
			lst = lst->next;
	}
	/* Resetting the pointer to the first node of the list. */
	lst = tmp;
	/* Returning the pointer to the first node of the list. */
	return (lst);
}

#include <stdio.h>

int ascending(int a, int b)
{
	return (a <= b);
}

int	main(void)
{
	t_list *c = malloc(sizeof(t_list));
	c->next = 0;
	c->data = 45;

	t_list *b = malloc(sizeof(t_list));
	b->next = c;
	b->data = 73;

	t_list *a = malloc(sizeof(t_list));
	a->next = b;
	a->data = 108;

	t_list *cur = a;
	while (cur)
	{
		printf("%d", cur->data);
		if (cur->next != 0)
			printf(", ");
		cur = cur->next;
	}
	printf("\n");

	cur = sort_list(a, ascending);

	// cur = a;
	while (cur)
	{
		printf("%d", cur->data);
		if (cur->next != 0)
			printf(", ");
		cur = cur->next;
	}
	printf("\n");
}