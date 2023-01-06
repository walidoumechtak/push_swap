/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_new.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <woumecht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 13:28:33 by woumecht          #+#    #+#             */
/*   Updated: 2023/01/06 17:04:01 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_swap	*lst_new(int content)
{
	t_swap	*new;

	new = malloc(sizeof(t_swap));
	new->data = content;
	new->next = NULL;
	return (new);
}
