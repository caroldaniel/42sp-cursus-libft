/*
*	LIBRARY
*	#include <string.h>
*	DESCRIPTION
*	The strdup() function allocates sufficient memory for a copy of the string 
*	s1, does the copy, and returns a pointer to it.
*	RETURN VALUES
*	The strdup() function returns thE pointer to the copy of s1.
*/

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		size;
	char	*ptr;

	size = ft_strlen((char *)s1);
	ptr = malloc((size + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	ft_memcpy(ptr, s1, size);
	ptr[size] = '\0';
	return (ptr);
}
