/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cado-car <cado-car@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 16:24:26 by cado-car          #+#    #+#             */
/*   Updated: 2021/07/24 16:24:26 by cado-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	Checks if character passed in parameter is printable
*/

#include "libft.h"

int	ft_isprint(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
