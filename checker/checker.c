/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 17:10:12 by woumecht          #+#    #+#             */
/*   Updated: 2023/01/04 18:25:21 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <limits.h>

int	ft_checker(s_swap **stackA, s_swap **stackB, int ac, char *str)
{
    if (str == "sa")
        sa(stackA);
    else if (str == "sb")
        sb(stackB);
    else if (str == "ss")
        ss(stackA, stackB);
    else if (str == "pa")
        pa(stackA, stackB);
    else if (str == "pb")
        pb(stackA, stackB);
    else if (str == "ra")
        ra(stackA);
    else if (str == "rb")
        rb(stackB);
    else if (str == "rr")
        rr(stackA, stackB);
    else if (str == "rra")
        rra_bonus(stackA);
    else if (str == "rrb")
        rrb_bonus(stackB);
    else if (str == "rrr")
        rrr_bonus(stackA, stackB);
    else
        return (-1);
    if (check_list_sort(stackA) == 1)
        return (1);   
    else
        return (0); 
}

int	main(int ac, char **av)
{
	s_swap *stackA;
	s_swap *stackB;
	char *str;
	int i;
    int temp;

	str = malloc(4 * sizeof(char));
	if (!str)
		exit(0);
	if (isall_digit(av, ac - 1) == 0 || (isnot_repeated(av, ac - 1) == 0)
		|| (isnot_big_int(av, ac - 1) == 0))
	{
		ft_putstr("Error\n", 2);
		return (0);
	}
    fill_stack(&stackA, av, ac);
    i = read(0, str, 4);
	if (i == -1)
	{
		ft_putstr("Error\n", 2);
		return (0);
	}
    while (str != NULL)
    {
	    temp = ft_checker(&stackA, &stackB, ac, str);
        i = read(0, str, 4);
    }
    if (temp == 1)
        ft_putstr("OK\n", 1);
    else if (temp == -1)
        ft_putstr("Error\n", 2);
    else
        ft_putstr("KO\n", 1);
    return (0);
}