/*
*	LIBRARY
*	#include <ctype.h>
*	DESCRIPTION
*	The isascii() function tests for an ASCII character, which is any character 
*	between 0 and octal 0177 inclusive.
*	RETURN VALUES
*	The isascii() function returns zero if the character tests false and returns 
*	non-zero if the character tests true.
*/

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
