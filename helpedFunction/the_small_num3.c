/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   the_small_num3.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 22:05:37 by woumecht          #+#    #+#             */
/*   Updated: 2022/12/16 22:12:46 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int the_small_num3(s_swap *list, int ac)
{
    s_swap  *ptr;
    int min_index;
    int i;
    int min;

    i = 2;
    min = list -> data;
    list = list -> next;
    ptr = list;
    while (list != NULL && i--)
    {
        if (ptr -> data < min)
        {
            min_index = i;
            min = ptr -> data;
        }
        ptr = ptr -> next;
    }
    return (min_index);
}