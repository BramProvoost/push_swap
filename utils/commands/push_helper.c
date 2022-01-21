/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_helper.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: bprovoos <bprovoos@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/21 08:41:49 by bprovoos      #+#    #+#                 */
/*   Updated: 2022/01/21 09:02:01 by bprovoos      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

/* Write On Top Of Stack */

void	wotos(t_node **head, int value)
{
	t_node	*node;

	node = (t_node *)malloc(sizeof(t_node));
	if (!node)
	{
		ft_printf("Faild to create memory to add element at start of the linked list.\n");
		exit(0);
	}
	node->value = value;
	if (*head == NULL)
	{
		*head = node;
		(*head)->next = NULL;
	}
	else 
	{
		node->next = *head;
		*head = node;
	}
}

/* Delete On Top Of Stack */

void	dotos(t_node **head)
{
	t_node	*temp;

	if (head == NULL || *head == NULL)
	{
		ft_printf("Trying to remove a note that not exist\n");
		return ;
	}
	temp = *head;
	*head = (*head)->next;
	free(temp);
}
