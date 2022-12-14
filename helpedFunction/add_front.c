/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_front.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 15:08:10 by woumecht          #+#    #+#             */
/*   Updated: 2022/12/13 15:28:51 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    add_fornt(s_swap **list, s_swap *new)
{
    s_swap  *temp;
    
    if (!list || !new)
        return ;
    if (!*list)
    {
        *list = new;
        return ;
    }
    new -> next = *list;
    *list = new;
}