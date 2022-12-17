/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swapA.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 10:15:46 by woumecht          #+#    #+#             */
/*   Updated: 2022/12/17 09:50:04 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    swapA(s_swap **stackA)
{
    s_swap  *ptr;
    s_swap  *last;
    int len;
    int temp;

    ptr = *stackA;
    len = list_size(ptr);
    last = get_last_lst(ptr);
    if (len == 2)
    {
        temp = ptr -> data;
        ptr -> data = ptr -> next -> data;
        ptr -> next -> data = temp;
        printf("sa\n");
        return ;
    }
    else if (len > 2)
    {
        while (ptr -> next -> next != NULL)
            ptr = ptr -> next;
        temp = ptr -> data;
        ptr -> data = last -> data;
        last -> data = temp;
        printf("sa\n");
    }
}