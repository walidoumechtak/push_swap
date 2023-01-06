/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <woumecht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 17:47:20 by woumecht          #+#    #+#             */
/*   Updated: 2023/01/06 17:01:32 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ra(t_swap **stackA)
{
	t_swap	*ptr;
	t_swap	*last;
	int		len;

	len = list_size(*stackA);
	if (len > 1)
	{
		last = get_last_lst(*stackA);
		ptr = *stackA;
		*stackA = (*stackA)->next;
		ptr->next = NULL;
		last->next = ptr;
	}
}
