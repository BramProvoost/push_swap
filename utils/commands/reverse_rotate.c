/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   reverse_rotate.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: bprovoos <bprovoos@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/21 08:23:21 by bprovoos      #+#    #+#                 */
/*   Updated: 2022/08/17 11:46:54 by bprovoos      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	rra(t_node **stack_a)
{
	ft_printf("rra\n");
	rotate_reverse(stack_a);
}

void	rrb(t_node **stack_b)
{
	ft_printf("rrb\n");
	rotate_reverse(stack_b);
}

void	rrr(t_node **stack_a, t_node **stack_b)
{
	ft_printf("rrr\n");
	rotate_reverse(stack_a);
	rotate_reverse(stack_b);
}
