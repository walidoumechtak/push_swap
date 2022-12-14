/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotateA.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 12:53:53 by woumecht          #+#    #+#             */
/*   Updated: 2022/12/11 13:06:18 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int *get_array(s_swap *lst, int len)
{
    int *arr;
    int i;

    i = 0;
    arr = malloc(len * sizeof(int));
    while (i < len)
    {
        arr[i] = lst -> data;
        lst = lst -> next;
        i++;
    }
    len -= 1;
    while (len > 0)
    {
        arr[len] = arr[len - 1];
        len--;
    }
    return (arr);
}

void    rotateA(s_swap *stackA)
{
    s_swap  *list;
    int *arr;
    int len;
    int i = 0;

    list = stackA;
    len = list_size(stackA) - 1;
    arr = get_array(stackA, len);
    while (list != NULL)
    {
        list -> data = arr[i];
        list = list -> next;
    }
    free(arr);
}