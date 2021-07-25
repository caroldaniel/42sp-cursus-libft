/*
*	LIBRARY
*	#include <string.h>
*	DESCRIPTION
*	The strnstr() function locates the first occurrence of the null-terminated 
*	string needle in the string haystack, where not more than len characters are 
*	searched.  Characters that appear after a `\0' character are not searched.
*	RETURN VALUES
*	If needle is an empty string, haystack is returned; if needle occurs nowhere 
*	in haystack, NULL is returned; otherwise a pointer to the first character of 
*	the first occurrence of needle is returned.
*/

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	c;

	if (!needle)
		return (haystack);
	i = 0;
	while (haystack[i] != '\0' && i < len)
	{
		c = 0;
		while (haystack[i + c] == needle[c] && needle[c] != '\0')
		{
			if (needle[c + 1] == '\0')
				return (&haystack[i]);
			c++;
		}
		i++;
	}
	return (NULL);
}
