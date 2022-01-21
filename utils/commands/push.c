/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: bprovoos <bprovoos@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/21 08:22:52 by bprovoos      #+#    #+#                 */
/*   Updated: 2022/01/21 08:54:15 by bprovoos      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

void	pa(t_node **stack_a, t_node **stack_b)
{
	ft_printf("pa\n");
	if (*stack_b == NULL)
		return ;
	wotos(stack_a, (*stack_b)->value);
	dotos(stack_b);
}

void	pb(t_node **stack_a, t_node **stack_b)
{
	ft_printf("pb\n");
	if (*stack_a == NULL)
		return ;
	wotos(stack_b, (*stack_a)->value);
	dotos(stack_a);
}
