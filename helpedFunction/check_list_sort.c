/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_list_sort.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 17:42:46 by woumecht          #+#    #+#             */
/*   Updated: 2023/01/04 18:06:15 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_list_sort(s_swap *list)
{
	int		test;
	s_swap	*ptr1;
	s_swap	*ptr2;

	ptr1 = list;
	test = 0;
	while (ptr1->next->next != NULL)
	{
		ptr2 = list;
		list = (list)->next;
		while (ptr2->next != NULL)
		{
			if (ptr2->data < (ptr2->next->data))
			{
				test = 1;
				ptr2 = ptr2->next;
			}
			else
				return (0);
		}
		ptr1 = ptr1->next;
	}
	return (test);
}
