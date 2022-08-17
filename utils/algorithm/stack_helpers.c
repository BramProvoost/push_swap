/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   stack_helpers.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: bprovoos <bprovoos@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/11 18:48:04 by bprovoos      #+#    #+#                 */
/*   Updated: 2022/08/17 11:40:20 by bprovoos      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

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

int	is_sorted(t_node *stack_a, t_node *stack_b)
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
