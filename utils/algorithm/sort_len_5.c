/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sort_len_5.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bprovoos <bprovoos@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/22 13:35:02 by bprovoos      #+#    #+#                 */
/*   Updated: 2022/01/24 07:59:27 by bprovoos      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "sorting_helpers.h"

void	sort_len_5(t_node **stack_a, t_node **stack_b, int stack_len)
{
	pb_lowest(stack_a, stack_b);
	if (stack_len == 5)
		pb_lowest(stack_a, stack_b);
	sort_len_3(stack_a);
	pa(stack_a, stack_b);
	if (stack_len == 5)
		pa(stack_a, stack_b);
}
