/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sort_len_3.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bprovoos <bprovoos@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/22 13:06:31 by bprovoos      #+#    #+#                 */
/*   Updated: 2022/01/22 13:06:58 by bprovoos      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "sorting_helpers.h"

void	sort_len_3(t_node **stack)
{
	if ((*stack)->value > (*stack)->next->value)
	{
		if ((*stack)->next->value < (*stack)->next->next->value)
		{
			if ((*stack)->value < (*stack)->next->next->value)
				sa(stack);
			else
				ra(stack);
		}
		else
		{
			sa(stack);
			rra(stack);
		}
	}
	else if ((*stack)->next->value > (*stack)->next->next->value)
	{
		if ((*stack)->value < (*stack)->next->next->value)
		{
			sa(stack);
			ra(stack);
		}
		else
			rra(stack);
	}
}
