/*
*	DESCRIPTION
*	Allocates (with malloc(3)) and returns a substring from the string ’s’.
*	The substring begins at index ’start’ and is of maximum size ’len’.
*	RETURN VALUES
*	The substring. NULL if the allocation fails.
*/

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)