/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotateB.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <woumecht@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 14:43:13 by woumecht          #+#    #+#             */
/*   Updated: 2022/12/09 14:43:13 by woumecht         ###   ########.fr       */
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


void    rotateB(s_swap *stackB)
{
    s_swap  *list;
    int *arr;
    int len;
    int i = 0;

    list = stackB;
    len = list_size(stackB) - 1;
    arr = get_array(stackB, len);
    while (list != NULL)
    {
        list -> data = arr[i];
        list = list -> next;
    }
    free(arr);
}