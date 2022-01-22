/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sort_len_5.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bprovoos <bprovoos@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/22 13:35:02 by bprovoos      #+#    #+#                 */
/*   Updated: 2022/01/22 16:03:06 by bprovoos      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "sorting_helpers.h"

void	sort_len_5(t_node **stack_a, t_node **stack_b, int stack_len)
{
	int	lowest;
	int highest;

	if (stack_len == 0)		//temp
		stack_b = NULL;		//temp
	get_limits_numbers(*stack_a, &lowest, &highest);
	ft_printf("lowest: %d\thighest: %d\n", lowest, highest);		
	sort_len_3(stack_a);
}
