/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_clear.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 13:22:45 by woumecht          #+#    #+#             */
/*   Updated: 2023/01/06 06:08:16 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	lst_clear(s_swap **lst)
{
	s_swap	*tmp;
	s_swap	*p;

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
