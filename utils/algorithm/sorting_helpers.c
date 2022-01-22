/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sorting_helpers.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: bprovoos <bprovoos@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/22 13:00:39 by bprovoos      #+#    #+#                 */
/*   Updated: 2022/01/22 16:48:58 by bprovoos      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "sorting_helpers.h"

void	pick_sorting_methode(t_node **stack_a, t_node **stack_b, int stack_len)
{
	if (stack_len < 2)
		exit(0);
	else if (stack_len == 2)
		sort_len_2(stack_a);
	else if (stack_len == 3)
		sort_len_3(stack_a);
	else if (stack_len <= 5)
		sort_len_5(stack_a, stack_b, stack_len);
	stack_b = NULL;
}

int	stack_length(t_node *stack)
{
	int	counter;

	counter = 0;
	while (stack)
	{
		stack = stack->next;
		counter++;
	}
	return (counter);
}

void	get_limits_numbers(t_node *stack, int *lowest, int *highest)
{
	*lowest = stack->value;
	*highest = stack->value;
	while (stack)
	{
		if (*lowest > stack->value)
			*lowest = stack->value;
		if (*highest < stack->value)
			*highest = stack->value;
		stack = stack->next;
	}
}

void	pb_position(t_node **stack_a, t_node **stack_b, int pos)
{
	int		length;

	length = stack_length(*stack_a);
	if (pos < (length / 2) + 1)
	{
		while (pos)
		{
			ra(stack_a);
			pos--;
		}
	}
	else
	{
		pos = length - pos;
		while (pos)
		{
			rra(stack_a);
			pos--;
		}
	}
	pb(stack_a, stack_b);
}

void	pb_lowest(t_node **stack_a, t_node **stack_b)
{
	t_node	*node;
	int		lowest;
	int		counter;
	int		pos;

	node = *stack_a;
	lowest = node->value;
	counter = 0;
	pos = counter;
	while (node)
	{
		if (lowest > node->value)
		{
			lowest = node->value;
			pos = counter;
		}
		node = node->next;
		counter++;
	}
	pb_position(stack_a, stack_b, pos);
}
