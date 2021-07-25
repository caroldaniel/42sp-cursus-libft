/*
*	LIBRARY
*	#include <ctype.h>
*	DESCRIPTION
*	The isalnum() function tests for any character for which isalpha(3) or 
*	isdigit(3) is true.
*	The value of the argument must be representable as an unsigned char or the 
*	value of EOF.
*	RETURN VALUES
*	The isalnum() function returns zero if the character tests false and returns 
*	non-zero if the character tests true.
*/

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha != 0 && ft_isdigit != 0)
		return (1);
	else
		return (0);
}
