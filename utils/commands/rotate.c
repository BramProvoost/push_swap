/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rotate.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bprovoos <bprovoos@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/21 08:23:13 by bprovoos      #+#    #+#                 */
/*   Updated: 2022/08/17 11:48:45 by bprovoos      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	ra(t_node **stack_a)
{
	ft_printf("ra\n");
	rotate(stack_a);
}

void	rb(t_node **stack_b)
{
	ft_printf("rb\n");
	rotate(stack_b);
}

void	rr(t_node **stack_a, t_node **stack_b)
{
	ft_printf("rr\n");
	rotate(stack_a);
	rotate(stack_b);
}
