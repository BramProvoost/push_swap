/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rotate_helper.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: bprovoos <bprovoos@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/21 08:42:12 by bprovoos      #+#    #+#                 */
/*   Updated: 2022/08/17 11:48:06 by bprovoos      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

t_node	*tail_of_stack(t_node *head)
{
	if (head == NULL)
		return (NULL);
	while (1)
	{
		if (head->next == NULL)
			return (head);
		head = head->next;
	}
}

void	rotate(t_node **head)
{
	t_node	*old_head;

	if (*head == NULL)
		return ;
	tail_of_stack(*head)->next = *head;
	old_head = *head;
	*head = (*head)->next;
	old_head->next = NULL;
}
