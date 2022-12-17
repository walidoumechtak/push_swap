/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverseRA.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 14:58:52 by woumecht          #+#    #+#             */
/*   Updated: 2022/12/17 15:55:06 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int *get_array(s_swap *lst, int len)
{
    int *arr;
    int temp;
    int i;

    i = 0;
    arr = malloc(len * sizeof(int));
    while (i <= len)
    {
        arr[i] = lst -> data;
        lst = lst -> next;
        i++;
    }
    temp = arr[len];
    while (len > 0)
    {
        arr[len] = arr[len - 1];
        len--;
    }
    arr[0] = temp;
    return (arr);
}

void    rra(s_swap **stackA)
{
    s_swap  *list;
    int *arr;
    int len;
    int i;

    i = 0;
    list = *stackA;
    len = list_size(list) - 1;
    arr = get_array(list, len);
    while (list != NULL)
    {
        list -> data = arr[i];
        list = list -> next;
        i++;
    }
    printf("ra\n");
    free(arr);
}
