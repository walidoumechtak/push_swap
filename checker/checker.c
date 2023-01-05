/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 17:10:12 by woumecht          #+#    #+#             */
/*   Updated: 2023/01/05 08:21:36 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <limits.h>

int cls(s_swap *stackA)
{
    if (check_list_sort(stackA) == 1)
        return (1);   
    else
        return (0);
}

int	ft_checker(s_swap **stackA, s_swap **stackB, char *str)
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
        return (999);
    return (cls(*stackA));
}

int	main(int ac, char **av)
{
	s_swap *stackA;
	s_swap *stackB;
	char *str;
	int i;
    int temp;

	str = malloc(3 * sizeof(char));
	if (!str)
		exit(0);
	if (isall_digit(av, ac - 1) == 0 || (isnot_repeated(av, ac - 1) == 0)
		|| (isnot_big_int(av, ac - 1) == 0))
	{
		ft_putstr("Error\n", 2);
		return (0);
	}
    fill_stack(&stackA, av, ac);
    i = read(0, str, 3);
	if (i == -1)
	{
		ft_putstr("Error\n", 2);
		return (0);
	}
    while (i > 0)
    {
	    temp = ft_checker(&stackA, &stackB, str);
        i = read(0, str, 3);
    }
    if (temp == 1)
        ft_putstr("OK\n", 1);
    else if (temp == 999)
        ft_putstr("Error\n", 2);
    else
        ft_putstr("KO\n", 1);
    return (0);
}