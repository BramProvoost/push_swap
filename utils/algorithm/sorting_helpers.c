/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sorting_helpers.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: bprovoos <bprovoos@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/22 13:00:39 by bprovoos      #+#    #+#                 */
/*   Updated: 2022/08/17 11:38:23 by bprovoos      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	pick_sorting_methode(t_node **stack_a, t_node **stack_b, int stack_len)
{
	if (stack_len < 2)
		exit(0);
	else if (stack_len == 2)
		sort_len_2(stack_a);
	else if (stack_len == 3)
		sort_len_3(stack_a);
	else if (stack_len <= 5)
		sort_len_5(stack_a, stack_b);
	else if (stack_len <= 100)
		sort_len_100(stack_a, stack_b);
	else
		sort_len_500(stack_a, stack_b);
}

int	get_first_pos_of_value(t_node *stack, int min, int max)
{
	int	counter;

	counter = 0;
	while (stack)
	{
		if (stack->value <= max && stack->value >= min)
			return (counter);
		counter++;
		stack = stack->next;
	}
	return (-1);
}

int	get_last_pos_of_value(t_node *stack, int min, int max)
{
	int	counter;
	int	last_pos;

	counter = 0;
	last_pos = -1;
	while (stack)
	{
		if (stack->value <= max && stack->value >= min)
			last_pos = counter;
		stack = stack->next;
		counter++;
	}
	return (last_pos);
}

int	r_b_top(t_node **stack, int value)
{
	int	pos1;
	int	pos2;
	int	lenght;

	pos1 = get_first_pos_of_value(*stack, value, INT_MAX);
	pos2 = get_last_pos_of_value(*stack, value, INT_MAX);
	lenght = stack_length(*stack);
	if (pos1 > (lenght / 2))
		pos1 -= lenght;
	if (pos2 > (lenght / 2))
		pos2 -= lenght;
	if (pos1 * pos1 >= pos2 * pos2)
		pos1 = pos2;
	return (pos1);
}

int	r_s_top(t_node **stack, int value)
{
	int	pos1;
	int	pos2;
	int	lenght;

	pos1 = get_first_pos_of_value(*stack, INT_MIN, value);
	pos2 = get_last_pos_of_value(*stack, INT_MIN, value);
	lenght = stack_length(*stack);
	if (pos1 > (lenght / 2))
		pos1 -= lenght;
	if (pos2 > (lenght / 2))
		pos2 -= lenght;
	if (pos1 * pos1 > pos2 * pos2)
		pos1 = pos2;
	return (pos1);
}
