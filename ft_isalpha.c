/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cado-car <cado-car@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 16:24:10 by cado-car          #+#    #+#             */
/*   Updated: 2021/07/24 16:24:10 by cado-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	DESCRIPTION:
*	checks for an alphabetic character; 
*	in the standard "C" locale, it is equivalent to (isupper(c) || islower(c)).  
*	In some locales, there may be additional characters  for  which  isalpha()  
*	is  true—letters which are neither uppercase nor lowercase.
*	ORIGINAL LIBRARY:
*	#include <ctype.h>
*	PARAMETERS:
*	int c, which represents an unsigned char
*/

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
