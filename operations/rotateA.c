/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotateA.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <woumecht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 12:53:53 by woumecht          #+#    #+#             */
/*   Updated: 2023/01/06 17:06:48 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotatea(t_swap **stackA)
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
		ft_putstr("ra\n", 1);
	}
}
