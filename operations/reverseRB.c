/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverseRB.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 17:21:26 by woumecht          #+#    #+#             */
/*   Updated: 2022/12/28 18:44:35 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    rrb(s_swap **stackB)
{
    // s_swap  *list;
    // int *arr;
    // int len;
    // int i = 0;

    // list = *stackB;
    // len = list_size(*stackB) - 1;
    // arr = get_array(*stackB, len);
    // while (list != NULL)
    // {
    //     list -> data = arr[i];
    //     list = list -> next;
    // }
    // free(arr);
    // printf("rrb");

    s_swap  *last;
    s_swap  *ptr1;
    s_swap  *ptr2;

    last = get_last_lst(*stackB);
    ptr1 = *stackB;
    ptr2 = *stackB;
    while (ptr2->next->next != NULL)
        ptr2 = ptr2->next;
    ptr2->next = NULL;
    last->next = ptr1;
    *stackB = last;
    printf("rrb\n");
}


