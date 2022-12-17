/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotateA.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 12:53:53 by woumecht          #+#    #+#             */
/*   Updated: 2022/12/17 15:57:05 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    rotateA(s_swap **stackA)     
{
    s_swap  *ptr;
    int last;

    ptr = *stackA;
    last = ptr -> data;
    while (ptr -> next != NULL)
    {
        ptr -> data = ptr -> next -> data;
        ptr = ptr -> next;
    }
    ptr -> data = last;
    printf("rra\n");
}
