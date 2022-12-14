/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_new.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <woumecht@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 13:28:33 by woumecht          #+#    #+#             */
/*   Updated: 2022/12/12 13:32:42 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

s_swap  *lst_new(int content)
{
    s_swap  *new;

    new = malloc(sizeof(s_swap));
    new -> data = content;
    new -> next = NULL;
    return (new);
}