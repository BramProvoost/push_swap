/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sort_len_500.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: bprovoos <bprovoos@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/28 12:00:06 by bprovoos      #+#    #+#                 */
/*   Updated: 2022/01/28 14:55:19 by bprovoos      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "sorting_helpers.h"

void	sort_len_500(t_node **stack_a, t_node **stack_b)
{
	move_to_stack_b_in_buckets(stack_a, stack_b);
	move_in_order_to_stack_a(stack_a, stack_b);
}
