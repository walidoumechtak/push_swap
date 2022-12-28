/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverseRA.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 14:58:52 by woumecht          #+#    #+#             */
/*   Updated: 2022/12/28 18:44:25 by woumecht         ###   ########.fr       */
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
    // s_swap  *list;
    // int *arr;
    // int len;
    // int i;

    // i = 0;
    // list = *stackA;
    // len = list_size(list) - 1;
    // arr = get_array(list, len);
    // while (list != NULL)
    // {
    //     list -> data = arr[i];
    //     list = list -> next;
    //     i++;
    // }
    // free(arr);
    s_swap  *last;
    s_swap  *ptr1;
    s_swap  *ptr2;

    last = get_last_lst(*stackA);
    ptr1 = *stackA;
    ptr2 = *stackA;
    while (ptr2->next->next != NULL)
        ptr2 = ptr2->next;
    ptr2->next = NULL;
    last->next = ptr1;
    *stackA = last;
    printf("rra\n");
}


// int main()
// {
//     s_swap *f = lst_new(1);
//     s_swap *s = lst_new(3);
//     s_swap *t = lst_new(2);
//     s_swap *b;

//     b = NULL;
//     f->next = s;
//     s->next = t;
//     t->next = NULL;
    
//     pushB(&f, &b);
//     pushB(&f, &b);
//     rrb(&b);
    

//     printf("%d\n",f->data);
//     f = f -> next;
//     // printf("%d\n",f->data);
//     printf(" - %d\n",b->data);
//     b = b -> next;
//     printf(" - %d\n",b->data);
    
// }

            