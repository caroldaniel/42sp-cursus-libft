/*
*	LIBRARY
*	#include <ctype.h>
*	DESCRIPTION
*	The toupper() function converts a lower-case letter to the corresponding 
*	upper-case letter.  The argument must be representable as an unsigned char 
*	or the value of EOF.
*	RETURN VALUES
*	If the argument is a lower-case letter, the toupper() function returns the 
*	corresponding upper-case letter if there is one; otherwise, the argument is 
*	returned unchanged.
*/

#include "libft.h"

int	ft_toupper(int c)
{
	char	ch;

	ch = (unsigned char)c;
	if (ch >= 'a' && ch <= 'z')
		return (c - ('a' - 'A'));
	else
		return (d);
}
