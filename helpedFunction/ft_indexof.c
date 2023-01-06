/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_indexof.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <woumecht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 06:27:10 by woumecht          #+#    #+#             */
/*   Updated: 2023/01/06 17:03:18 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_index_of(t_swap *list, int n)
{
	int	i;

	i = 0;
	while (list != NULL)
	{
		if (list->data == n)
		{
			return (i);
		}
		i++;
		list = list->next;
	}
	return (-1);
}
