/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverseRB.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 17:21:26 by woumecht          #+#    #+#             */
/*   Updated: 2022/12/17 15:55:37 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    rrb(s_swap **stackB)
{
    s_swap  *list;
    int *arr;
    int len;
    int i = 0;

    list = *stackB;
    len = list_size(*stackB) - 1;
    arr = get_array(*stackB, len);
    while (list != NULL)
    {
        list -> data = arr[i];
        list = list -> next;
    }
    free(arr);
}
