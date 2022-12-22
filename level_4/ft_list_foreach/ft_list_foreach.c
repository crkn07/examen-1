/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 16:48:54 by crtorres          #+#    #+#             */
/*   Updated: 2022/12/09 17:54:20 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

/**
 * Ft_list_foreach() iterates through the linked list pointed to by begin_list, and
 * applies the function pointed to by f to each element's data.
 * 
 * @param begin_list a pointer to the first element of a linked list
 * @param f a pointer to a function that takes a void pointer and returns nothing.
 */
void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list *list_ptr;

	list_ptr = begin_list;
	while (list_ptr)
	{
		(*f)(list_ptr->data);
		list_ptr = list_ptr->next;
	}
}