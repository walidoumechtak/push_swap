/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <woumecht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 17:10:12 by woumecht          #+#    #+#             */
/*   Updated: 2023/01/06 17:02:14 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <limits.h>

int	cls(t_swap *stackA)
{
	if (check_list_sort(stackA) == 1)
		return (1);
	else
		return (0);
}

int	ft_checker(t_swap **stackA, t_swap **stackB, char *str)
{
	if (ft_strcmp(str, "sa") == 0)
		sa(stackA);
	else if (ft_strcmp(str, "sb") == 0)
		sb(stackB);
	else if (ft_strcmp(str, "ss") == 0)
		ss(stackA, stackB);
	else if (ft_strcmp(str, "pa") == 0)
		pa(stackA, stackB);
	else if (ft_strcmp(str, "pb") == 0)
		pb(stackA, stackB);
	else if (ft_strcmp(str, "ra") == 0)
		ra(stackA);
	else if (ft_strcmp(str, "rb") == 0)
		rb(stackB);
	else if (ft_strcmp(str, "rr") == 0)
		rr(stackA, stackB);
	else if (ft_strcmp(str, "rra") == 0)
		rra_bonus(stackA);
	else if (ft_strcmp(str, "rrb") == 0)
		rrb_bonus(stackB);
	else if (ft_strcmp(str, "rrr") == 0)
		rrr(stackA, stackB);
	else
		return (404);
	return (cls(*stackA));
}

int	ft_errors(char **av, int ac)
{
	if (isall_digit(av, ac - 1) == 0)
		return (0);
	else if (isnot_repeated(av, ac - 1) == 0)
		return (0);
	else if (isnot_big_int(av, ac - 1) == 0)
		return (0);
	else
		return (1);
}

int	ft_read(t_swap **stackA, t_swap **stackB, char *str)
{
	int	temp;

	str = get_next_line(0);
	while (str)
	{
		temp = ft_checker(stackA, stackB, str);
		free(str);
		str = get_next_line(0);
	}
	return (temp);
}

int	main(int ac, char **av)
{
	t_swap	*stacka;
	t_swap	*stackb;
	char	*str;
	int		temp;

	str = NULL;
	if (ft_errors(av, ac) == 0)
	{
		ft_putstr("Error\n", 2);
		return (0);
	}
	temp = is_inputs_sorted(av, ac - 1);
	if (temp == 1)
		return (0);
	fill_stack(&stacka, av, ac);
	temp = ft_read(&stacka, &stackb, str);
	free(str);
	if (temp == 1)
		ft_putstr("OK\n", 1);
	else if (temp == 404)
		ft_putstr("Error\n", 2);
	else
		ft_putstr("KO\n", 1);
}
