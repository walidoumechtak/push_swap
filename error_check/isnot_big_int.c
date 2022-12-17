/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isnot_big_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 10:02:19 by woumecht          #+#    #+#             */
/*   Updated: 2022/12/17 14:37:53 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

size_t	*get_arr_numbers_big(char **av, int ac)
{
	int		i;
	size_t	*arr;

	i = 0;
	arr = malloc(ac * sizeof(size_t));
	while (ac > 0)
	{
		arr[i] = ft_atoi(av[i + 1]);
		i++;
		ac--;
	}
	return (arr);
}

int	isnot_big_int(char **av, int ac)
{
	int		i;
	size_t	*arr;

	arr = get_arr_numbers_big(av, ac);
	i = 0;
	while (i < ac)
	{
		if (arr[i] > 2147483647)
		{
			free(arr);
			return (0);
		}
		i++;
	}
	free(arr);
	return (1);
}
