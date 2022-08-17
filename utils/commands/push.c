/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: bprovoos <bprovoos@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/21 08:22:52 by bprovoos      #+#    #+#                 */
/*   Updated: 2022/08/17 11:44:54 by bprovoos      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	pa(t_node **stack_a, t_node **stack_b)
{
	ft_printf("pa\n");
	if (*stack_b == NULL)
		return ;
	write_on_top_of_stack(stack_a, (*stack_b)->value);
	delete_from_top_of_stack(stack_b);
}

void	pb(t_node **stack_a, t_node **stack_b)
{
	ft_printf("pb\n");
	if (*stack_a == NULL)
		return ;
	write_on_top_of_stack(stack_b, (*stack_a)->value);
	delete_from_top_of_stack(stack_a);
}
