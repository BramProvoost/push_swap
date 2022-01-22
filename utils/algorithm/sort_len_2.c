/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sort_len_2.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bprovoos <bprovoos@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/22 13:05:36 by bprovoos      #+#    #+#                 */
/*   Updated: 2022/01/22 13:05:59 by bprovoos      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "sorting_helpers.h"

void	sort_len_2(t_node **stack)
{
	if ((*stack)->value > (*stack)->next->value)
		sa(stack);
}
