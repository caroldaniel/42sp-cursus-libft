/*
*	DESCRIPTION
*	Adds the element ’new’ at the beginning of the list.
*	RETURN VALUES
*	-
*/

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*elem;

	if (*lst == NULL)
		*lst = new;
	else
	{
		elem = new;
		elem->next = *lst;
		*lst = elem;
	}
}
