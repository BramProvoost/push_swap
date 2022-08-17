/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   pb_low.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bprovoos <bprovoos@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/11 19:17:33 by bprovoos      #+#    #+#                 */
/*   Updated: 2022/08/17 11:34:55 by bprovoos      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	pb_position(t_node **stack_a, t_node **stack_b, int pos)
{
	int	length;

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
