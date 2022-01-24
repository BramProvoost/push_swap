/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sort_len_100.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: bprovoos <bprovoos@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/24 08:07:07 by bprovoos      #+#    #+#                 */
/*   Updated: 2022/01/24 13:59:19 by bprovoos      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "sorting_helpers.h"

typedef struct	s_stack_info
{
	// int	stack_a_length;
	// int	stack_b_length;
	// int	number_of_buckets;
	// int	stack_a_hold_first_pos;
	// int	stack_a_hold_first_value;
	int	
	int	lowest_value;
	int	highest_value;
	int	hold_value;
}		t_stack_info;

/*
Make buckets.
Action for each bucket:
1. Get the position of the first number in range of the current bucket.
2. Get the position of the last number in range of the current bucket.
3. set lowes position on top of stack_a.
   prepare stack_b. (RR or RRR)
   Get rotation action and steps from stack_b to get the highest number on top .
   5	6
   		4
   		3
   1. = rb, pb, (rrb, pa, pa, pa, pa)
   2. = pb, ()
4. pb
5. repeat staps 1-4 for the other buckets.
7. Rotate the bigest number of stack_b on top and pa.

Use pb_position
*/



int	get_hold_first_pos(t_node *stack_a, int limit)
{
	int	counter;

	counter = 0;
	while (stack_a)
	{
		if (stack_a->value <= limit)
			return (counter);
		stack_a = stack_a->next;
		counter++;
	}
	return (-1);
	t_stack_info *a;
}

int	get_hold_last_pos(t_node *stack_a, int limit)
{
	int	counter;
	int	last_pos;
	
	counter = 0;
	last_pos = -1;
	while (stack_a)
	{
		if (stack_a->value <= limit)
			last_pos = counter;
		stack_a = stack_a->next;
		counter++;
	}
	return (last_pos);
}

void	sort_len_100(t_node **stack_a, t_node **stack_b, int stack_len)
{
	int	limit;
	int	pos1;
	int	pos2;

	ft_printf("Limit: %d\n", limit);
	pos1 = get_hold_first_pos(*stack_a, limit);
	pos2 = get_hold_last_pos(*stack_a, limit);
	if (pos1 < pos2)
	{
		while(pos1 > 0)
		{
			ra(stack_a);
			pos1--;
		}
	}
	else
	{
		while  (pos2 > 0)
		{
			rra(stack_a);
			pos2--;
		}
	}
	pb(stack_a, stack_b);
}
