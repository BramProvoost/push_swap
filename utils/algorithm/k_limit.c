/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   k_limit.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: bprovoos <bprovoos@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/11 19:22:11 by bprovoos      #+#    #+#                 */
/*   Updated: 2022/08/17 11:34:40 by bprovoos      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int	get_k_smallest(t_node *stack, int k)
{
	int		result;
	int		smallest;
	t_node	*temp;

	result = INT_MIN;
	while (k)
	{
		smallest = INT_MAX;
		temp = stack;
		while (temp)
		{
			if (smallest > temp->value && result < temp->value)
				smallest = temp->value;
			temp = temp->next;
		}
		result = smallest;
		k--;
	}
	return (result);
}

int	get_k_biggest(t_node *stack, int k)
{
	int		result;
	int		biggest;
	t_node	*temp;

	result = INT_MAX;
	while (k)
	{
		biggest = INT_MIN;
		temp = stack;
		while (temp)
		{
			if (biggest < temp->value && result > temp->value)
				biggest = temp->value;
			temp = temp->next;
		}
		result = biggest;
		k--;
	}
	return (result);
}
