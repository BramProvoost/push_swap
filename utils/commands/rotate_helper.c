/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rotate_helper.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: bprovoos <bprovoos@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/21 08:42:12 by bprovoos      #+#    #+#                 */
/*   Updated: 2022/01/21 09:09:51 by bprovoos      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "rotate.h"

t_node *tailOfStack(t_node *head)
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
	t_node	*oldHead;

	if (*head == NULL)
		return ;
	tailOfStack(*head)->next = *head;
	oldHead = *head;
	*head = (*head)->next;
	oldHead->next = NULL;
}
