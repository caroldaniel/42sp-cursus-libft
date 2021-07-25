/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cado-car <cado-car@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 16:24:18 by cado-car          #+#    #+#             */
/*   Updated: 2021/07/24 16:24:18 by cado-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	Checks if character passed in parameter can be represented by an ASCII element
*/

#include "libft.h"

int	ft_isascii(char c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
