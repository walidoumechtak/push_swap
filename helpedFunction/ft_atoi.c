/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 21:42:52 by woumecht          #+#    #+#             */
/*   Updated: 2023/01/04 08:53:43 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <limits.h>

long long int	result_f(char *str, int i, int signe)
{
	long long int	result;

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

long long int	ft_atoi(const char *str)
{
	int				i;
	long long int	result;
	long long int	signe;

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
