/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_size.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <woumecht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 19:29:08 by woumecht          #+#    #+#             */
/*   Updated: 2023/01/06 17:03:51 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	list_size(t_swap *ptr)
{
	int	i;

	i = 0;
	if (!ptr)
		return (0);
	while (ptr != NULL)
	{
		i++;
		ptr = ptr->next;
	}
	return (i);
}
