/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_inputs_sorted.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 15:39:17 by woumecht          #+#    #+#             */
/*   Updated: 2023/01/06 13:02:01 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// int    how_many_num(char **av, int ac)
// {
//     int cpt;
//     int i;
//     int j;

//     i = 1;
//     while (i < ac)
//     {
//         j++;
//         while (av[i][j])
//         {
//             cpt++;
//             j++;
//         }
//         i++;
//     }
    
// }

int	*get_array_numbers(char **av, int ac)
{
	int	i;
    // int cpt;
	int	*arr;

	i = 0;
    // cpt = how_many_num(av, ac);
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
    
    arr = get_array_numbers(av, ac);
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
