/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 16:35:07 by crtorres          #+#    #+#             */
/*   Updated: 2022/12/09 17:50:25 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

/**
 * If the first element of the list matches the data_ref, then remove it and
 * recursively call the function on the rest of the list
 * 
 * @param begin_list a pointer to a pointer to the first element of a linked list
 * @param data_ref the data to compare to
 * @param cmp a function that compares two elements and returns 0 if they are equal
 * 
 * @return the address of the pointer to the first element of the list.
 */
void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	if (begin_list == NULL || *begin_list == NULL)				/* Checking if the list is empty. */
		return;

	t_list *cur = *begin_list;									/* Assigning the address of the first element of the list to the variable `cur`. */

	if (cmp(cur->data, data_ref) == 0)							/* Comparing the data of the current element of the list to the data_ref. */
	{
		*begin_list = cur->next;								/* Assigning the address of the next element of the list to the pointer to the first element of the list. */
		free(cur);
		ft_list_remove_if(begin_list, data_ref, cmp);			/* Calling the function on the rest of the list. */
	}
	cur = *begin_list;											/* Assigning the address of the first element of the list to the variable `cur`. */
	ft_list_remove_if(&cur->next, data_ref, cmp);				/* Calling the function on the rest of the list. */
}

#include <stdio.h>
#include <string.h>

void	print_list(t_list **begin_list)
{
	t_list *cur = *begin_list;
	while (cur != 0)
	{
		printf("%s\n", cur->data);
		cur = cur->next;
	}
}

int		main(void)
{
	char straa[] = "String aa";
	t_list *aa = malloc(sizeof(t_list));
	aa->next = 0;
	aa->data = straa;

	char strbb[] = "String bb";
	t_list *bb = malloc(sizeof(t_list));
	bb->next = 0;
	bb->data = strbb;

	char strcc[] = "String cc";
	t_list *cc = malloc(sizeof(t_list));
	cc->next = 0;
	cc->data = strcc;

	char strdd[] = "String dd";
	t_list *dd = malloc(sizeof(t_list));
	dd->next = 0;
	dd->data = strdd;

	aa->next = bb;
	bb->next = cc;
	cc->next = dd;

	t_list **begin_list = &aa;

	print_list(begin_list);
	printf("----------\n");
	ft_list_remove_if(begin_list, straa, strcmp);
	print_list(begin_list);
}