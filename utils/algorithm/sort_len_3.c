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
			if ((*stack)->value < (*stack)->next->next->value) // 2 1 3
				sa(stack);
			else // case 3 1 2
				ra(stack);
		}
		else // 3 2 1
		{
			sa(stack);
			rra(stack);
		}
	}
	else if ((*stack)->next->value > (*stack)->next->next->value)
	{
		if ((*stack)->value < (*stack)->next->next->value) // case 1 3 2
		{
			sa(stack);
			ra(stack);
		}
		else // case 2 3 1
			rra(stack);
	}
}

