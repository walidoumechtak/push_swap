/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swapB.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 19:38:32 by woumecht          #+#    #+#             */
/*   Updated: 2022/12/17 15:49:11 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swapB(s_swap *stackB)
{
	s_swap *ptr;
	int temp;

	ptr = stackB;

	temp = ptr->data;
	ptr->data = ptr->next->data;
	ptr->next->data = temp;
	printf("sa\n");
}