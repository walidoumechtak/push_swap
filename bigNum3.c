/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bigNum3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 08:24:43 by woumecht          #+#    #+#             */
/*   Updated: 2022/12/17 08:30:49 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int the_big_num3(s_swap *list)
{
    s_swap  *ptr;
    int max_index;
    int i;
    int max;
    
    i = 2;
    max = list -> data;
    list = list -> next;
    ptr = list;
    max_index = 2;
    while (ptr != NULL && i--)
    {
        if (ptr -> data > max)
        {
            max_index = i;
            max = ptr -> data;
        }
        ptr = ptr -> next;
    }
    return (max_index);
}