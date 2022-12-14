/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 21:42:52 by woumecht          #+#    #+#             */
/*   Updated: 2022/12/13 12:05:12 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <limits.h>

static unsigned long	result_f(char *str, int i, int signe)
{
	unsigned long	result;

	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		if (result > LONG_MAX && signe == 1)
			return (-1);
		else if (result > LONG_MAX && signe == -1)
			return (0);
		i++;
	}
	return (result);
}

size_t	ft_atoi(const char *str)
{
	int	i;
	size_t	result;
	size_t	signe;

	result = 0;
	i = 0;
	signe = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		signe = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	result = result_f((char *)str, i, signe);
	return (result * signe);
}
