/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotateB.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 14:43:13 by woumecht          #+#    #+#             */
/*   Updated: 2023/01/04 18:28:28 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    rotateB(s_swap **stackB)
{
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
        ft_putstr("rb\n", 1);
    }
}
