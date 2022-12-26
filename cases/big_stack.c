/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 10:59:42 by woumecht          #+#    #+#             */
/*   Updated: 2022/12/26 18:49:58 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int nb_in_chunck(int *arr, int start, int end, int nb)
{
    int i;
    
    i = 0;
    while (i <= end)
    {
        if (arr[i] == nb)
            return (nb);
        i++;
    }
    return (0);
}

void	big_stack(s_swap **stackA, s_swap **stackB, int nm)
{
    s_swap  *ptr;
	int stack_size;
	int chunk_size;
	int counter;
    int start;
    int end;
    int *arr;
    int first_num;
    int moves;

    ptr = *stackA;
	stack_size = list_size(*stackA);
	chunk_size = stack_size / nm;
    start = 0;
    end = chunk_size;
    arr = get_sorted_array(*stackA, stack_size);
    while (ptr != NULL)
    {
        if (nb_in_chunck(arr, start, end, ptr->data))
        {
            first_num = ptr->data;
            moves = index_from_stack(*stackA, first_num);
            while (moves > 0 && index_from_stack(*stackA, first_num) > stack_size / 2)
                rotateA(stackA);
            else if (moves > 0 && index_from_stack(*stackA, first_num) <= stack_size / 2)
                
        }
        ptr = ptr-> next;
    }
    
}