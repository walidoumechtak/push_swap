/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <woumecht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 17:50:00 by woumecht          #+#    #+#             */
/*   Updated: 2023/01/06 17:01:57 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	sa(t_swap **stackA)
{
	t_swap	*ptr;
	int		temp;

	ptr = *stackA;
	temp = ptr->data;
	ptr->data = ptr->next->data;
	ptr->next->data = temp;
}
