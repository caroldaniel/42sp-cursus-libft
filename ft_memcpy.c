/*
*	LIBRARY
*	#include <string.h>
*	DESCRIPTION
*	The memcpy() function copies n bytes from memory area src to memory area dst.  
*	If dst and src overlap, behavior is undefined.
*	RETURN VALUES
*	The memcpy() function returns the original value of dst.
*/

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (!dst || !src)
		return (NULL);
	i = 0;
	while (i < n)
	{
		((unsigned char)dst)[i] = ((unsigned char)src)[i];
		i++;
	}
	return (dst);
}
