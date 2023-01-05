/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_list_sort.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 17:42:46 by woumecht          #+#    #+#             */
/*   Updated: 2023/01/05 16:54:05 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_list_sort(s_swap *list)
{
	int		test;
	s_swap	*ptr1;

	if (!list)
		return (0);
	ptr1 = list;
	test = 0;
	while (ptr1->next != NULL)
	{
		if (ptr1->data < ptr1->next->data)
			test = 1;
		else
		{
			test = 0;
			break ;
		}
		ptr1 = ptr1->next;
	}
	return (test);
}
