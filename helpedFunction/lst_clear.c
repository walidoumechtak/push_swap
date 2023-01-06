/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_clear.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <woumecht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 13:22:45 by woumecht          #+#    #+#             */
/*   Updated: 2023/01/06 17:03:56 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	lst_clear(t_swap **lst)
{
	t_swap	*tmp;
	t_swap	*p;

	p = *lst;
	if (!p)
		return ;
	while (p != NULL)
	{
		tmp = p->next;
		free(p);
		p = tmp;
	}
	p = NULL;
}
