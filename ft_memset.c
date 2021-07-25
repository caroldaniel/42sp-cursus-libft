/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cado-car <cado-car@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 16:23:48 by cado-car          #+#    #+#             */
/*   Updated: 2021/07/24 16:23:48 by cado-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	Checks if character passed in parameter is alphabetical
*/

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		s[i] = c;
	}
	return (s);
}
