/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   swap.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: bprovoos <bprovoos@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/20 10:01:08 by bprovoos      #+#    #+#                 */
/*   Updated: 2022/08/17 11:54:35 by bprovoos      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	sa(t_node **stack_a)
{
	ft_printf("sa\n");
	swap(stack_a);
}

void	sb(t_node **stack_b)
{
	ft_printf("sb\n");
	swap(stack_b);
}

void	ss(t_node **stack_a, t_node **stack_b)
{
	ft_printf("ss\n");
	swap(stack_a);
	swap(stack_b);
}
