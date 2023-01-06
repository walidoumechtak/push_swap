/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverseRB.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 17:21:26 by woumecht          #+#    #+#             */
/*   Updated: 2023/01/06 06:24:44 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rrb(s_swap **stackB)
{
	s_swap	*last;
	s_swap	*ptr1;
	s_swap	*ptr2;
	int		len;

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
		ft_putstr("rrb\n", 1);
	}
}
