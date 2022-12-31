/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_the_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 12:58:53 by woumecht          #+#    #+#             */
/*   Updated: 2022/12/30 18:35:58 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    index_the_stack(s_swap *stack)
{
    s_swap  *ptr;
    int *arr;
    int i;
    int temp;
    int len;

    arr = get_sorted_array(stack, list_size(stack));
    temp = the_small_num(stack);
    ptr = stack;
    while (stack != NULL)
    {
        i = 0;
        len = list_size(ptr);
        while (len > 0)
        {
            if (stack-> data == arr[i])
                stack->index = i;
            len--;
            i++;
        }
        stack = stack -> next;
    }
    free(arr);
}