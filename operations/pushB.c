/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushB.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 08:55:39 by woumecht          #+#    #+#             */
/*   Updated: 2022/12/24 10:39:05 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pushB(s_swap **stackA, s_swap **stackB)
{
	s_swap	*ptr;
	int		len;

	len = list_size(*stackA);
	
	if (len != 0)
	{
		if (!*stackB)
		{
			*stackB = lst_new((*stackA)->data);
			ptr = (*stackA) -> next;
			*stackA = ptr;
			printf("pb\n");
			return ;
		}
		ptr = (*stackA) -> next;
		add_fornt(stackB, *stackA);
		*stackA = ptr;
	}
	printf("pb\n");
}
