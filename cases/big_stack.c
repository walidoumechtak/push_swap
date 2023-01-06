/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <woumecht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 10:59:42 by woumecht          #+#    #+#             */
/*   Updated: 2023/01/06 20:41:45 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

typedef struct s_norm
{
	int	cpt;
	int	*arr;
	int	len;
	int	index;
	int	i;
}		t_norm;

void	push_to_b(t_swap **stackA, t_swap **stackB, int n)
{
	t_swap	*ptr;
	int		size_stack;
	int		size_chunk;
	int		cpt;
	int		size;

	cpt = 0;
	ptr = *stackA;
	size_stack = list_size(ptr);
	size_chunk = size_stack / n;
	size = 1;
	while ((*stackA) != NULL)
	{
		if (((*stackA)->index <= size_chunk * size))
		{
			pushb(stackA, stackB);
			cpt++;
			if ((*stackB)->index >= ((size_chunk * size)) - (size_chunk / 2))
				rotateb(stackB);
		}
		else
			rotatea(stackA);
		if (cpt == size_chunk * size)
			size++;
	}
}

void	go_back(t_swap **stackA, t_swap **stackB, t_norm *norm, int n)
{
	if (n == 1)
	{
		pusha(stackA, stackB);
		(norm->i)++;
	}
	else if (n == 2)
	{
		pusha(stackA, stackB);
		rotatea(stackA);
		(norm->cpt)++;
	}
	else if (n == 3)
	{
		rra(stackA);
		(norm->cpt)--;
		(norm->i)++;
	}
}

void	norm2(t_swap **stackA, t_norm *norm)
{
	while ((norm->cpt) >= 0)
	{
		rra(stackA);
		((norm->cpt))--;
	}
	if ((*stackA)->data > norm->arr[norm->len])
		rotatea(stackA);
	free(norm->arr);
}

void	go_back_to_a(t_swap **stackA, t_swap **stackB)
{
	t_norm	*norm;

	norm = malloc(1 * sizeof(t_norm));
	(norm->i) = 0;
	norm->len = list_size(*stackB) - 1;
	(norm->cpt) = 0;
	norm->arr = desc_array(*stackB, norm->len);
	while (*stackB != NULL)
	{
		norm->index = ft_index_of(*stackB, norm->arr[(norm->i)]);
		if (norm->index != -1)
		{
			if ((*stackB)->data == norm->arr[(norm->i)])
				go_back(stackA, stackB, norm, 1);
			else if (norm->cpt == 0
				|| (*stackB)->data > get_last_lst(*stackA)->data)
				go_back(stackA, stackB, norm, 2);
			else
				ft_role(stackB, list_size(*stackB), norm->index);
		}
		else
			go_back(stackA, stackB, norm, 3);
	}
	norm2(stackA, norm);
	free(norm);
}

void	big_stack(t_swap **stackA, t_swap **stackB, int nm)
{
	push_to_b(stackA, stackB, nm);
	go_back_to_a(stackA, stackB);
}
