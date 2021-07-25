/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cado-car <cado-car@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 16:24:32 by cado-car          #+#    #+#             */
/*   Updated: 2021/07/24 16:24:32 by cado-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	Calculates the length of the string passed as parameter
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
