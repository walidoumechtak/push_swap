/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_all_digit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 09:59:55 by woumecht          #+#    #+#             */
/*   Updated: 2023/01/04 17:09:45 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	is_d(char c)
{
	if ((c >= '0' && c <= '9') || c == ' ')
		return (1);
	return (0);
}

int	isall_digit(char **av, int ac)
{
	int i;
	int j;
	
	
	i = 1;
	while (ac > 0)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			if (is_d(av[i][j]) == 0)
				return (0);
			j++;
		}
		i++;
		ac--;
	}
	return (1);
}