/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_back.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <woumecht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 19:52:02 by woumecht          #+#    #+#             */
/*   Updated: 2023/01/06 17:02:50 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	add_back(t_swap **list, t_swap *new)
{
	t_swap	*p;

	p = *list;
	if (!list || !new)
		return ;
	if (*list == NULL)
	{
		(*list) = new;
		return ;
	}
	while ((p)->next != NULL)
		(p) = (p)->next;
	(p)->next = new;
}
