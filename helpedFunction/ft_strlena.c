/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlena.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 13:10:01 by woumecht          #+#    #+#             */
/*   Updated: 2023/01/05 15:31:18 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_strlena(char *str)
{
	int	i;

	i = 0;
	while (str[i] >= 'a' && str[i] <= 'z')
		i++;
	return (i);
}