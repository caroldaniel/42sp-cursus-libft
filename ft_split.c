/*
*	DESCRIPTION
*	Allocates (with malloc(3)) and returns an array of strings obtained by 
*	splitting ’s’ using the character ’c’ as a delimiter. The array must be
*	ended by a NULL pointer.
*	RETURN VALUES
*	The array of new strings resulting from the split. 
*	NULL if the allocation fails.
*/

#include "libft.h"
int	ft_addpart(char **result, char *prev, int size, char c);
int	ft_count(const char *str, char c);

char	**ft_split(char const *s, char c)
{
	char	**result;
	char	*prev;
	char	*next;
	int		size;
	int		i;

	i = 0;
	result = (char **)malloc((ft_count(s, c) + 1) * sizeof(char *));
	prev = (char *)s;
	next = (char *)s;
	while (1)
	{
		if (c == *s || *s == '\0')
			next = (char *)s;
		size = next - prev;
		if (size > 1)
			i += ft_addpart(&result[i], prev, size, c);
		if (*s == '\0')
			break ;
		prev = next;
		s++;
	}
	result[i] = 0;
	return (result);
}

// add to the array of strings result the parts separated by char c
int	ft_addpart(char **result, char *prev, int size, char c)
{
	if (c == prev[0])
	{
		prev++;
		size--;
	}
	*result = (char *)malloc((size + 1) * sizeof(char));
	ft_strlcpy(*result, prev, size + 1);
	return (1);
}

// count how many splits are made in string str with the separator c
int	ft_count(const char *str, char c)
{
	char	*prev;
	char	*next;
	int		counter;

	counter = 0;
	prev = (char *)str;
	next = (char *)str;
	while (1)
	{
		if (*str == c || *str == '\0')
			next = (char *)str;
		if (next - prev > 1)
			counter++;
		if (*str == '\0')
			break ;
		prev = next;
		str++;
	}
	return (counter);
}
