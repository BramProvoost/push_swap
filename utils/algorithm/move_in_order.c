/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   move_in_order.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: bprovoos <bprovoos@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/11 19:20:36 by bprovoos      #+#    #+#                 */
/*   Updated: 2022/08/17 11:34:49 by bprovoos      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	move_to_sb_in_buckets(t_node **stack_a, t_node **stack_b, int bs)
{
	int	lim_a;
	int	lim_b;

	while ((*stack_a)->next != NULL)
	{
		lim_a = get_k_smallest(*stack_a, (stack_length(*stack_a) / bs) + 1);
		if (*stack_b != NULL)
		{
			lim_b = get_k_biggest(*stack_b, 1);
			while (r_s_top(stack_a, lim_a) > 0
				&& r_b_top(stack_b, lim_b) > 0)
				rr(stack_a, stack_b);
			while (r_s_top(stack_a, lim_a) < 0
				&& r_b_top(stack_b, lim_b) < 0)
				rrr(stack_a, stack_b);
		}
		while (r_s_top(stack_a, lim_a) > 0)
			ra(stack_a);
		while (r_s_top(stack_a, lim_a) < 0)
			rra(stack_a);
		pb(stack_a, stack_b);
		print_stacks(*stack_a, *stack_b);
	}
	pb(stack_a, stack_b);
}

void	move_in_order_to_stack_a(t_node **stack_a, t_node **stack_b)
{
	int	lim_b;

	while ((*stack_b)->next != NULL)
	{
		lim_b = get_k_biggest(*stack_b, 1);
		while (r_b_top(stack_b, lim_b) > 0)
			rb(stack_b);
		while (r_b_top(stack_b, lim_b) < 0)
			rrb(stack_b);
		pa(stack_a, stack_b);
		print_stacks(*stack_a, *stack_b);
	}
	pa(stack_a, stack_b);
}
