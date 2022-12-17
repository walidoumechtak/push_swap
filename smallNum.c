/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smallNum3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 08:23:56 by woumecht          #+#    #+#             */
/*   Updated: 2022/12/17 19:36:33 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int the_small_num(s_swap *list)
{
    s_swap  *ptr;
    int min_index;
    int i;
    int min;

    i = 1;
    min = list -> data;
    list = list -> next;
    ptr = list;
    min_index = 0;
    while (ptr != NULL)
    {
        if (ptr -> data < min)
        {
            min_index = i;
            min = ptr -> data;
        }
        ptr = ptr -> next;
        i++;
    }
    return (min_index);
}