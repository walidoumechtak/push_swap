/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isnot_big_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 10:02:19 by woumecht          #+#    #+#             */
/*   Updated: 2023/01/05 08:05:26 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

long long int	*get_arr_numbers_big(char **av, int ac)
{
	int				i;
	long long int	*arr;

	i = 0;
	arr = malloc(ac * sizeof(long long int));
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
	int				i;
	long long int	*arr;

	arr = get_arr_numbers_big(av, ac);
	i = 0;
	while (i < ac)
	{
		if (arr[i] > 2147483647 || arr[i] < -2147483648)
		{
			free(arr);
			return (0);
		}
		i++;
	}
	free(arr);
	return (1);
}
