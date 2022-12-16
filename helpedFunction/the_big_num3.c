/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   the_big_num3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 17:51:58 by woumecht          #+#    #+#             */
/*   Updated: 2022/12/16 22:00:15 by woumecht         ###   ########.fr       */
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
    ptr = list;
    max = ptr -> data;
    ptr = ptr -> next;
    while (ptr != NULL && i--)
    {
        if (ptr -> data > max)
        {
            max_index = i;
            max = ptr -> data;
            ptr = ptr -> next;
        }
        ptr = ptr -> next;
    }
}
