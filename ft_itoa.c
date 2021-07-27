/*
*	DESCRIPTION
*	Allocates (with malloc) and returns a string representing the integer 
*	received as an argument. Negative numbers must be handled.
*	RETURN VALUES
*	The string representing the integer. NULL if the allocation fails.
*/

#include "libft.h"
int		ft_countsize(long int n);
void	ft_convbase(long int n, char *number, long int i);

char	*ft_itoa(int n)
{
	char		*number;
	long int	len;

	len = ft_countsize(n);
	number = (char *)malloc((len + 1) * sizeof(char));
	if (!number)
		return (NULL);
	ft_convbase(n, number, (len - 1));
	return (number);
}

// recursively count integer size
int	ft_countsize(long int n)
{
	if (n < 0)
		return (1 + ft_countsize(-n));
	if ((n / 10) == 0)
		return (1);
	else
		return (1 + ft_countsize(n / 10));
}

// recursively convert integer to string
void	ft_convbase(long int n, char *number, long int i)
{
	if (n < 0)
	{
		number[0] = '-';
		n *= -1;
	}
	if (n >= 10)
		ft_convbase((n / 10), number, (i - 1));
	number[i] = (n % 10) + '0';
}
