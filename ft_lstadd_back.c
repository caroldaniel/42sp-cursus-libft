/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cado-car <cado-car@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 12:10:21 by cado-car          #+#    #+#             */
/*   Updated: 2021/07/31 12:12:27 by cado-car         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

/*
*	DESCRIPTION
*	Adds the element ’new’ at the end of the list.
*	PARAMETERS
*	#1. The address of a pointer to the first link of a list.
*	#2. The address of a pointer to the element to be added to the list.
*	RETURN VALUES
*	-
*/

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*elem;
	t_list	*temp;

	temp = *lst;
	if (*lst == NULL)
		*lst = new;
	else
	{
		elem = new;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = elem;
		elem->next = NULL;
	}
}
