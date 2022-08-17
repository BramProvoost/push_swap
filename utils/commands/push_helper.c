/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_helper.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: bprovoos <bprovoos@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/21 08:41:49 by bprovoos      #+#    #+#                 */
/*   Updated: 2022/08/17 11:43:49 by bprovoos      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	write_on_top_of_stack(t_node **head, int value)
{
	t_node	*node;

	node = (t_node *)malloc(sizeof(t_node));
	if (!node)
		exit(0);
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

void	delete_from_top_of_stack(t_node **head)
{
	t_node	*temp;

	if (head == NULL || *head == NULL)
		return ;
	temp = *head;
	*head = (*head)->next;
	free(temp);
}
