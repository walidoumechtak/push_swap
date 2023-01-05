/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 17:50:15 by woumecht          #+#    #+#             */
/*   Updated: 2023/01/05 09:20:16 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	sb(s_swap **stackB)
{
	s_swap *ptr;
	int temp;

	ptr = *stackB;
	
	if (*stackB)
	{
		temp = ptr->data;
		ptr->data = ptr->next->data;
		ptr->next->data = temp;
	}
}