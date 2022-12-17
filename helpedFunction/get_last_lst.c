/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_last_lst.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 10:09:11 by woumecht          #+#    #+#             */
/*   Updated: 2022/12/17 09:34:10 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

s_swap  *get_last_lst(s_swap *lst)
{
    if (!lst)
        return (NULL);
    while (lst -> next != NULL)
        lst = lst -> next;
    return (lst);
}