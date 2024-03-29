/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <woumecht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 17:47:52 by woumecht          #+#    #+#             */
/*   Updated: 2023/01/06 17:01:37 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	rb(t_swap **stackB)
{
	t_swap	*ptr;
	t_swap	*last;
	int		len;

	if (*stackB == NULL)
		return ;
	len = list_size(*stackB);
	if (len > 1)
	{
		last = get_last_lst(*stackB);
		ptr = *stackB;
		*stackB = (*stackB)->next;
		ptr->next = NULL;
		last->next = ptr;
	}
}
