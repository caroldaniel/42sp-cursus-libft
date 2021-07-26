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
<<<<<<< HEAD
	size_t			i;
	unsigned char	*dstc;
	unsigned char	*srcc;
||||||| d185b18
	size_t	i;
=======
	size_t	i;
	char	*dstc;
	char	*srcc;
>>>>>>> 3957526ed3e77e336e81b39e073eb82368002b9f

	if (dst == NULL && src == NULL)
		return (NULL);
	i = 0;
	dstc = (unsigned char *)dst;
	srcc = (unsigned char *)src;
	while (i < n)
<<<<<<< HEAD
	{
		dstc[i] = srcc[i];
		i++;
	}
||||||| d185b18
	{
		((unsigned char)dst)[i] = ((unsigned char)src)[i];
		i++;
	}
=======
		dstc[i] = srcc[i];
>>>>>>> 3957526ed3e77e336e81b39e073eb82368002b9f
	return (dst);
}
