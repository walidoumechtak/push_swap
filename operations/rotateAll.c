/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotateAll.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <woumecht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 14:45:30 by woumecht          #+#    #+#             */
/*   Updated: 2023/01/06 16:11:57 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotateall(s_swap **stackA, s_swap **stackB)
{
	rotatea(stackA);
	rotateb(stackB);
	ft_putstr("rr\n", 1);
}
