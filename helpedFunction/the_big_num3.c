/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   the_big_num3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 17:51:58 by woumecht          #+#    #+#             */
/*   Updated: 2022/12/16 22:12:23 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int the_big_num3(s_swap *list, int ac)
{
    s_swap  *ptr;
    int max_index;
    int i;
    int max;
    
    i = 2;
    max_index = 2;
    max = list -> data;
    list = list -> next;
    ptr = list;
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