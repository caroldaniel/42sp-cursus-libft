/*
*	LIBRARY
*	#include <string.h>
*	DESCRIPTION
*	The memmove() function copies len bytes from string src to string dst.  
*	The two strings may overlap; the copy is always done in a nondestructive 
*	manner.
*	RETURN VALUES
*	The memmove() function returns the original value of dst.
*/

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*dstc;
	char	*srcc;

	if (dst == NULL && srs == NULL)
		return (NULL);
	dstc = (unsigned char *)dst;
	srcc = (unsigned char *)src;
	i = 1;
	if (srcc < dstc)
	{
		while (i <= len)
		{
			destc[len - i] = srcc[len - i];
			i++;
		}
	}
	else
		ft_memcpy(dstc, srcc, len);
	return (dst);
}
