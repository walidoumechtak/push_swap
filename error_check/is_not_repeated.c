/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_not_repeated.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 10:00:56 by woumecht          #+#    #+#             */
/*   Updated: 2022/12/17 14:38:28 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	*get_array_numbers_sort(char **av, int ac)
{
	int	i;
	int	*arr;

	i = 0;
	arr = malloc(ac * sizeof(int));
	while (ac > 0)
	{
		arr[i] = ft_atoi(av[i + 1]);
		i++;
		ac--;
	}
	return (arr);
}

int	isnot_repeated(char **av, int ac)
{
	int	*arr;
	int	i;
	int	j;

	arr = get_array_numbers_sort(av, ac);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (j < ac)
		{
			if (i == j)
			{
				j++;
				continue ;
			}
			if (arr[i] == arr[j])
            {
                free(arr);
				return (0);
            }
			j++;
		}
		i++;
	}
    free(arr);
	return (1);
}
