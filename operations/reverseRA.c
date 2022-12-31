/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverseRA.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 14:58:52 by woumecht          #+#    #+#             */
/*   Updated: 2022/12/31 15:40:49 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int *get_array(s_swap *lst, int len)
{
    int *arr;
    int temp;
    int i;

    i = 0;
    arr = malloc(len * sizeof(int));
    while (i <= len)
    {
        arr[i] = lst -> data;
        lst = lst -> next;
        i++;
    }
    temp = arr[len];
    while (len > 0)
    {
        arr[len] = arr[len - 1];
        len--;
    }
    arr[0] = temp;
    return (arr);
}

void    rra(s_swap **stackA)
{
    s_swap  *last;
    s_swap  *ptr2;

    ptr2 = *stackA;
    last = *stackA;
    while (last->next != NULL)
        last = last->next;
    while (ptr2->next->next != NULL)
        ptr2 = ptr2->next;
    ptr2->next = NULL;
    last->next = *stackA;
    *stackA = last;
    printf("rra\n");
}
        