/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 10:59:42 by woumecht          #+#    #+#             */
/*   Updated: 2022/12/28 21:31:13 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	nb_in_chunck(int *arr, int end, int nb)
{
	int	i;

	i = 0;
	while (i <= end)
	{
		if (arr[i] == nb)
			return (nb);
		i++;
	}
	return (0);
}

void	ft_role(s_swap **stackA,int size_stack)
{
	int	index;
	
	index = index_from_stack(*stackA, (*stackA)->index);
	if (index < size_stack / 2)
	{
		while (index-- > 0)
			rotateA(stackA);
	}
	else
	{
		while (index++ < size_stack)
			rra(stackA);
	}
}

void	push_to_b(s_swap **stackA, s_swap **stackB, int n)
{
	s_swap	*ptr;
	int		size_stack;
	int		size_chunk;
	int		cpt;
	int		start;
	int		end;
	stackB = NULL;

	cpt = 0;
	size_stack = list_size(*stackA);
	size_chunk = size_stack / n;
	ptr = *stackA;
	start = 0;
	end = size_chunk;
	// printf("stack : %d\n",size_stack);
	// printf("chunck : %d\n",size_chunk);
	// printf("chunck / 2 : %d\n",size_chunk/2);
	// printf("index : %d\n",ptr -> data);
	// rra(stackA);
	// printf("-------- \n");
	// printf("stack : %d\n",size_stack);
	// printf("chunck : %d\n",size_chunk);
	// printf("chunck / 2 : %d\n",size_chunk/2);
	// printf("index : %d\n",(*stackA) -> index);



	while ((*stackA) != NULL)
	{
		if ((*stackA)->index < size_chunk
		 && ((*stackA)->index < size_chunk / 2))
			// && (*stackA)->index > start)
		{
				
			ft_role(stackA, size_stack);
			pushB(stackA, stackB);
			cpt++;
		}
		else if ((*stackA)->index < size_chunk
				&& ((*stackA)->index >= size_chunk / 2))
				// && (*stackA)->index > start)
		{
			ft_role(stackA, size_stack);
			pushB(stackA, stackB);
			cpt++;
			rotateB(stackB);
		}
		else
		{
			// printf("%d\n", (*stackA)->data);
			rotateA(stackA);
			// printf("%d\n", (*stackA)->data);
		}
		if (cpt == size_chunk)
		{
			size_chunk *= 2;
			start += 20;
		}
		printf(" -- %d -- ", (*stackA)->data);
	}
}


void	big_stack(s_swap **stackA, s_swap **stackB, int nm)
{
    push_to_b(stackA, stackB, nm);
    while ((*stackB) != NULL)
    {
        printf("%d", (*stackB)->data);
        (*stackB) = (*stackB)->next;
    }
}