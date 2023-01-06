/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <woumecht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 17:49:19 by woumecht          #+#    #+#             */
/*   Updated: 2023/01/06 16:19:30 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	rrb_bonus(s_swap **stackB)
{
	int		len;
	s_swap	*last;
	s_swap	*ptr1;
	s_swap	*ptr2;

	if (!*stackB)
		return ;
	len = list_size(*stackB);
	last = get_last_lst(*stackB);
	ptr1 = *stackB;
	ptr2 = *stackB;
	if (len > 1)
	{
		while (ptr2->next->next != NULL)
			ptr2 = ptr2->next;
		ptr2->next = NULL;
		last->next = ptr1;
		*stackB = last;
	}
}
