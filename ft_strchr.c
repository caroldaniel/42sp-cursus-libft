<<<<<<< HEAD
/*
*	LIBRARY
*	#include <string.h>
*	DESCRIPTION
*	The strchr() function locates the first occurrence of c (converted to a 
*	char) in the string pointed to by s. The terminating null character is 
*	considered to be part of the string; therefore if c is `\0', the functions 
*	locate the terminating `\0'.
*	RETURN VALUES
*	The function strchr() returns a pointer to the located 
*	character, or NULL if the character does not appear in the string.
*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	ch;

	ch = (unsigned char)c;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == ch)
			return ((char *)(&s[i]));
		i++;
	}
	if (ch == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
||||||| d185b18
=======
/*
*	LIBRARY
*	#include <string.h>
*	DESCRIPTION
*	The strchr() function locates the first occurrence of c (converted to a 
*	char) in the string pointed to by s. The terminating null character is 
*	considered to be part of the string; therefore if c is `\0', the functions 
*	locate the terminating `\0'.
*	RETURN VALUES
*	The function strchr() returns a pointer to the located 
*	character, or NULL if the character does not appear in the string.
*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	ch;

	ch = (unsigned char)c;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == ch)
			return (s[i]);
		i++;
	}
	if (ch == '\0')
		return (s[i]);
	return (NULL);
}
>>>>>>> 3957526ed3e77e336e81b39e073eb82368002b9f
