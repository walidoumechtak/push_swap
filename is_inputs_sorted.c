/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_inputs_sorted.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 15:39:17 by woumecht          #+#    #+#             */
/*   Updated: 2022/12/14 15:20:38 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*get_array_numbers(char **av, int ac)
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


int is_inputs_sorted(char **av, int ac)
{
    int *arr;
    int i;
    int j;
    
    arr = get_array_numbers(av,ac);
    i = 0;
    while (i < ac - 1)
    {
        j = i + 1;
        while (j < ac)
        {
            if (arr[i] < arr[j])
                j++;
            else
            {
                free(arr);
                return (0);
            }
        }
        i++;
    }
    free(arr);
    return (1);
}
