/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_back.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <woumecht@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 19:52:02 by woumecht          #+#    #+#             */
/*   Updated: 2022/12/08 19:52:02 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    add_back(s_swap *list, s_swap *new)
{
    if (!list || !new)
        return ;
    while (list != NULL)
        list = list-> next;
    list -> next = new;
}