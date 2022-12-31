/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_back.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 19:52:02 by woumecht          #+#    #+#             */
/*   Updated: 2022/12/29 17:25:20 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    add_back(s_swap **list, s_swap *new)
{
    s_swap *p;

    p = *list;
    if (!list || !new)
        return ;
    // if (!*list)
    // {
    //     *list = new;
    //     return ;
    // }
    while ((p) -> next != NULL)
        (p) = (p) -> next;
    (p) -> next = new;
}