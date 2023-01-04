/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 17:48:42 by woumecht          #+#    #+#             */
/*   Updated: 2023/01/04 17:49:06 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    rra_bonus(s_swap **stackA)
{
    s_swap  *last;
    s_swap  *ptr2;

    if ((*stackA)->next == NULL || !*stackA)
        return ;
    ptr2 = *stackA;
    last = *stackA;
    while (last->next != NULL)
        last = last->next;
    while (ptr2->next->next != NULL)
        ptr2 = ptr2->next;
    ptr2->next = NULL;
    last->next = *stackA;
    *stackA = last;
}