/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   swap_helper.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: bprovoos <bprovoos@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/21 08:41:32 by bprovoos      #+#    #+#                 */
/*   Updated: 2022/01/21 09:13:38 by bprovoos      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "swap.h"

void	swap(t_node **head)
{
	t_node	*temp;

	if (*head == NULL || (*head)->next == NULL)
		return ;
	temp = *head;
	*head = (*head)->next;
	temp->next = (*head)->next;
	(*head)->next = temp;
}
