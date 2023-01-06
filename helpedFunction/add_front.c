/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_front.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <woumecht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 15:08:10 by woumecht          #+#    #+#             */
/*   Updated: 2023/01/06 17:02:54 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	add_fornt(t_swap **list, t_swap *new)
{
	if (list == NULL || new == NULL)
		return ;
	new->next = *list;
	*list = new;
}
