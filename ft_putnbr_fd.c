/*
*	DESCRIPTION
*	Outputs the integer ’n’ to the given file descriptor.
*	RETURN VALUES
*	-
*/

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*nbr;

	nbr = ft_itoa(n);
	ft_putstr_fd(nbr, fd);
}
