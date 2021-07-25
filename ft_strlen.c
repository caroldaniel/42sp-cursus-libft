/*
*	LIBRARY
*	#include <string.h>
*	DESCRIPTION
*	The strlen() function computes the length of the string s.  
*	RETURN VALUES
*	The strlen() function returns the number of characters that precede the 
*	terminating NUL character.  
*/

#include "libft.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
