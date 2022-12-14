/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_clear.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <woumecht@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 13:22:45 by woumecht          #+#    #+#             */
/*   Updated: 2022/12/12 13:26:18 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    lst_clear(s_swap **lst)
{
    s_swap  *tmp;
    s_swap  *p;

    p = *lst;   
    if (!p)
        return ;
    while (p != NULL)
    {
        tmp = p -> next;
        free(p);
        p = tmp;
    }
    p = NULL;   
}