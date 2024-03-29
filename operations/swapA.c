/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swapA.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <woumecht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 10:15:46 by woumecht          #+#    #+#             */
/*   Updated: 2023/01/06 17:07:03 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swapa(t_swap **stackA)
{
	t_swap	*ptr;
	int		temp;

	ptr = *stackA;
	temp = ptr->data;
	ptr->data = ptr->next->data;
	ptr->next->data = temp;
	ft_putstr("sa\n", 1);
}
