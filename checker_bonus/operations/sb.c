/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <woumecht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 17:50:15 by woumecht          #+#    #+#             */
/*   Updated: 2023/01/06 16:19:41 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	sb(s_swap **stackB)
{
	s_swap	*ptr;
	int		temp;

	ptr = *stackB;
	if (*stackB)
	{
		temp = ptr->data;
		ptr->data = ptr->next->data;
		ptr->next->data = temp;
	}
}
