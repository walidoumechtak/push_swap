/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotateB.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 14:43:13 by woumecht          #+#    #+#             */
/*   Updated: 2022/12/31 13:41:50 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    rotateB(s_swap **stackB)
{
    // s_swap  *ptr;
    // int last;

    // ptr = *stackB;
    // last = ptr -> data;
    // while (ptr -> next != NULL)
    // {
    //     ptr -> data = ptr -> next -> data;
    //     ptr = ptr -> next;
    // }
    // ptr -> next -> data = last;


    s_swap  *ptr;
    s_swap  *last;
    int len;

    if (*stackB == NULL)
        return ;
    len = list_size(*stackB);
    if (len > 1)
    {
        last = get_last_lst(*stackB);
        ptr = *stackB;
        *stackB = (*stackB) -> next;
        ptr -> next = NULL;    
        last -> next = ptr;
        printf("rb\n");
    }
}
