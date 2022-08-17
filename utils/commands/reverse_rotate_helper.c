/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   reverse_rotate_helper.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: bprovoos <bprovoos@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/21 08:42:28 by bprovoos      #+#    #+#                 */
/*   Updated: 2022/08/17 11:45:17 by bprovoos      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	rotate_reverse(t_node **head)
{
	t_node	*temp1;
	t_node	*temp2;

	if (*head == NULL)
		return ;
	temp1 = *head;
	while (1)
	{
		if (temp1->next->next == NULL)
			break ;
		temp1 = temp1->next;
	}
	temp2 = temp1->next;
	temp2->next = *head;
	*head = temp2;
	temp1->next = NULL;
}
