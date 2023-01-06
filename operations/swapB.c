/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swapB.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <woumecht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 19:38:32 by woumecht          #+#    #+#             */
/*   Updated: 2023/01/06 16:12:25 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swapb(s_swap *stackB)
{
	s_swap	*ptr;
	int		temp;

	ptr = stackB;
	temp = ptr->data;
	ptr->data = ptr->next->data;
	ptr->next->data = temp;
	ft_putstr("sb\n", 1);
}
