/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bigNum3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 08:24:43 by woumecht          #+#    #+#             */
/*   Updated: 2022/12/17 17:58:39 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int the_big_num3(s_swap *list)
{
    s_swap  *ptr;
    int max_index;
    int i;
    int max;
    
    i = 1;
    max = list -> data;
    list = list -> next;
    ptr = list;
    max_index = 0;
    while (ptr != NULL)
    {
        if (ptr -> data > max)
        {
            max_index = i;
            max = ptr -> data;
        }
        ptr = ptr -> next;
        i++;
    }
    return (max_index);
}