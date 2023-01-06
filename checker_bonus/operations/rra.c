/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <woumecht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 17:48:42 by woumecht          #+#    #+#             */
/*   Updated: 2023/01/06 17:01:44 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	rra_bonus(t_swap **stackA)
{
	t_swap	*last;
	t_swap	*ptr2;

	if ((*stackA)->next == NULL || !*stackA)
		return ;
	ptr2 = *stackA;
	last = *stackA;
	while (last->next != NULL)
		last = last->next;
	while (ptr2->next->next != NULL)
		ptr2 = ptr2->next;
	ptr2->next = NULL;
	last->next = *stackA;
	*stackA = last;
}
