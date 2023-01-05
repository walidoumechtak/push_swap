/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_front.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 15:08:10 by woumecht          #+#    #+#             */
/*   Updated: 2023/01/05 08:06:52 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	add_fornt(s_swap **list, s_swap *new)
{
	if (list == NULL || new == NULL)
		return ;
	new->next = *list;
	*list = new;
}
