/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sorting_helpers.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: bprovoos <bprovoos@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/22 13:00:39 by bprovoos      #+#    #+#                 */
/*   Updated: 2022/01/28 14:55:29 by bprovoos      ########   odam.nl         */
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
		sort_len_5(stack_a, stack_b);
	else if (stack_len <= 100)
		sort_len_100(stack_a, stack_b);
	else
		sort_len_500(stack_a, stack_b);
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

int	get_k_smallest(t_node *stack, int k)
{
	int		result;
	int		smallest;
	t_node	*temp;

	result = INT_MIN;
	while (k)
	{
		smallest = INT_MAX;
		temp = stack;
		while (temp)
		{
			if (smallest > temp->value && result < temp->value)
				smallest = temp->value;
			temp = temp->next;
		}
		result = smallest;
		k--;
	}
	return (result);
}

int	get_k_biggest(t_node *stack, int k)
{
	int		result;
	int		biggest;
	t_node	*temp;

	result = INT_MAX;
	while (k)
	{
		biggest = INT_MIN;
		temp = stack;
		while (temp)
		{
			if (biggest < temp->value && result > temp->value)
				biggest = temp->value;
			temp = temp->next;
		}
		result = biggest;
		k--;
	}
	return (result);
}

int	r_b_top(t_node **stack, int value)
{
	int	pos1;
	int	pos2;
	int	lenght;

	pos1 = get_first_pos_of_value(*stack, value, INT_MAX);
	pos2 = get_last_pos_of_value(*stack, value, INT_MAX);
	// ft_printf(BLUE"pos1 = %d\n"NC, pos1);
	// ft_printf(BLUE"pos2 = %d\n"NC, pos2);
	lenght = stack_length(*stack);
	if (pos1 > (lenght / 2))
		pos1 -= lenght;
	if (pos2 > (lenght / 2))
		pos2 -= lenght;
	if (pos1 * pos1 >= pos2 * pos2)
		pos1 = pos2;
	// ft_printf(BLUE"pos = %d\n"NC, pos1);
	return (pos1);
}

int	r_s_top(t_node **stack, int value)
{
	int	pos1;
	int	pos2;
	int	lenght;

	pos1 = get_first_pos_of_value(*stack, INT_MIN, value);
	pos2 = get_last_pos_of_value(*stack, INT_MIN,value);
	lenght = stack_length(*stack);
	if (pos1 > (lenght / 2))
		pos1 -= lenght;
	if (pos2 > (lenght / 2))
		pos2 -= lenght;
	if (pos1 * pos1 > pos2 * pos2)
		pos1 = pos2;
	// ft_printf(BLUE"pos = %d\n"NC, pos1);
	return (pos1);
}

void	move_to_stack_b_in_buckets(t_node **stack_a, t_node **stack_b)
{
	int	lim_a;
	int	lim_b;

	while ((*stack_a)->next != NULL)
	{
		lim_a = get_k_smallest(*stack_a, (stack_length(*stack_a) / 6) + 1);
		// ft_printf(BLUE"lim_a = %d\n"NC, lim_a);
		if (*stack_b != NULL)
		{
			lim_b = get_k_biggest(*stack_b, 1);
			// ft_printf(BLUE"lim_b = %d\n"NC, lim_b);
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

int		is_sorted(t_node *stack_a, t_node *stack_b)
{
	if (stack_b)
		return (0);
	while (stack_a && stack_a->next)
	{
		if (stack_a->value > stack_a->next->value)
			return (0);
		stack_a = stack_a->next;
	}
	return (1);
}

void	print_stacks(t_node *stack_a, t_node *stack_b)
{
	if (PRINT_STACK != 1)
		return ;
	ft_printf(YELLOW"A\tB\n"GREEN);
	while (stack_a != NULL || stack_b != NULL)
	{
		if (stack_a != NULL)
		{
			ft_printf("%d\t", stack_a->value);
			stack_a = stack_a->next;
		}
		else
			ft_printf("\t");
		if (stack_b != NULL)
		{
			ft_printf("%d\n", stack_b->value);
			stack_b = stack_b->next;
		}
		else
			ft_printf("\n");
	}
	ft_printf(YELLOW"-\t-\n"NC);
}

void	free_stack(t_node **stack)
{
	t_node	*iter;
	t_node	*del;

	iter = *stack;
	while (iter)
	{ 
		del = iter;
		iter = iter->next;
		free(del);
	}
	*stack = NULL;
}

int	free_stacks(t_node **stack_a, t_node **stack_b)
{
	free_stack(stack_a);
	free_stack(stack_b);
	return (0);
}
