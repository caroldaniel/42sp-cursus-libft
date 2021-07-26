<<<<<<< HEAD
/*
*	LIBRARY
*	#include <ctype.h>
*	DESCRIPTION
*	The tolower() function converts an upper-case letter to the corresponding 
*	lower-case letter.  The argument must be representable as an unsigned char 
*	or the value of EOF.
*	RETURN VALUES
*	If the argument is an upper-case letter, the tolower() function returns the 
*	corresponding lower-case letter if there is one; otherwise, the argument 
*	is returned unchanged.
*/

#include "libft.h"

int	ft_tolower(int c)
{
	char	ch;

	ch = (unsigned char)c;
	if (ch >= 'A' && ch <= 'Z')
		return (c + ('a' - 'A'));
	else
		return (c);
}
||||||| d185b18
=======
/*
*	LIBRARY
*	#include <ctype.h>
*	DESCRIPTION
*	The tolower() function converts an upper-case letter to the corresponding 
*	lower-case letter.  The argument must be representable as an unsigned char 
*	or the value of EOF.
*	RETURN VALUES
*	If the argument is an upper-case letter, the tolower() function returns the 
*	corresponding lower-case letter if there is one; otherwise, the argument 
*	is returned unchanged.
*/

#include "libft.h"

int	ft_tolower(int c)
{
	char	ch;

	ch = (unsigned char)c;
	if (ch >= 'A' && ch <= 'Z')
		return (c + ('a' - 'A'));
	else
		return (d);
}
>>>>>>> 3957526ed3e77e336e81b39e073eb82368002b9f
