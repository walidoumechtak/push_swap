/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotateB.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 14:43:13 by woumecht          #+#    #+#             */
/*   Updated: 2022/12/27 21:05:51 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    rotateB(s_swap **stackB)
{
    s_swap  *ptr;
    int last;

    ptr = *stackB;
    last = ptr -> data;
    while (ptr -> next != NULL)
    {
        ptr -> data = ptr -> next -> data;
        ptr = ptr -> next;
    }
    ptr -> next -> data = last;
    printf("rb");
}
