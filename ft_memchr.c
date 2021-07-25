/*
*	LIBRARY
*	#include <string.h>
*	DESCRIPTION
*	The memchr() function locates the first occurrence of c (converted to an 
*	unsigned char) in string s.
*	RETURN VALUES
*	The memchr() function returns a pointer to the byte located, or NULL if no 
*	such byte exists within n bytes.
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	ch;
	size_t			i;

	ch = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (s[i] == ch)
			return (&s[i]);
		i++;
	}
	return (NULL);
}
