/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 17:47:20 by woumecht          #+#    #+#             */
/*   Updated: 2023/01/04 19:50:16 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void    ra(s_swap **stackA)     
{
    s_swap  *ptr;
    s_swap  *last;
    int len;

    len = list_size(*stackA);
    if (len > 1)
    {
        last = get_last_lst(*stackA);
        ptr = *stackA;
        *stackA = (*stackA) -> next;
        ptr -> next = NULL;    
        last -> next = ptr;
    }
}
