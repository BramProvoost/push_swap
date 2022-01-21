/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   reverse_rotate.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: bprovoos <bprovoos@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/21 08:23:21 by bprovoos      #+#    #+#                 */
/*   Updated: 2022/01/21 09:06:46 by bprovoos      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "reverse_rotate.h"

void	rra(t_node **stack_a)
{
	ft_printf("rra\n");
	rotateReverse(stack_a);
}

void	rrb(t_node **stack_b)
{
	ft_printf("rrb\n");
	rotateReverse(stack_b);
}

void	rrr(t_node **stack_a, t_node **stack_b)
{
	ft_printf("rrr\n");
	rotateReverse(stack_a);
	rotateReverse(stack_b);
}
