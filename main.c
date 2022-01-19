/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: bprovoos <bprovoos@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/17 12:40:20 by bprovoos      #+#    #+#                 */
/*   Updated: 2022/01/19 14:40:02 by bprovoos      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include "ft_printf.h"

struct	s_Node
{
	int				data;
	struct s_Node	*next;
};

void	add_node(struct s_Node **head, int value)
{
	struct s_Node	*link;

	link = (struct s_Node *)malloc(sizeof(struct s_Node));
	link->data = value;
	link->next = NULL;
	if (*head == NULL)
	{
		*head = link;
		(*head)->next = *head;
	}
	else
	{
		link->next = *head;
		*head = link;
	}
}

void	print_stack(struct s_Node *head)
{
	struct s_Node	*node;

	node = head;
	while (node->next != NULL)
	{
		ft_printf("head->data:\t%d\n", node->data);
		ft_printf("head->next:\t%p\n", node->next);
		node = node->next;
	}
	ft_printf("head->data:\t%d\n", node->data);
	ft_printf("head->next:\t%p\n", node->next);
}

int	main(int argc, char **argv)
{
	int				i;

	// struct s_Node	*head;
	// struct s_Node	*second;
	// struct s_Node	*third;

	struct s_Node	*head_a;
	struct s_Node	*head_b;

	// head = (struct s_Node *)malloc(sizeof(struct s_Node));
	// second = (struct s_Node *)malloc(sizeof(struct s_Node));
	// third = (struct s_Node *)malloc(sizeof(struct s_Node));

	// head->data = 1;
	// head->next = second;

	// second->data = 2;
	// second->next = third;

	// third->data = 3;
	// third->next = NULL;

	i = 1;
	while (i < argc)
	{
		ft_printf("%s\n", argv[i]);
		i++;
	}
	// ft_printf("head->data:\t%d\n", head->data);
	// ft_printf("head->next:\t%p\n", head->next);
	// ft_printf("second->data:\t%d\n", second->data);
	// ft_printf("second->next:\t%p\n", second->next);
	// ft_printf("third->data:\t%d\n", third->data);
	// ft_printf("third->next:\t%p\n", third->next);
	// print_stack(head);

	head_a = NULL;
	head_b = NULL;

	add_node(&head_a, 1);
	add_node(&head_a, 2);
	ft_printf("data: %d\n", head_a->data);
	ft_printf("next: %p\n", head_a->next);
	ft_printf("data: %d\n", head_a->next->data);
	ft_printf("next: %p\n", head_a->next->next);
	ft_printf("data: %d\n", head_a->next->next->data);
	ft_printf("next: %p\n", head_a->next->next->next);
	// add_node(head_a, 6);
	// head_a->data = 4;
	// ft_printf("head_a->data:\t%d\n", head_a->data);
	// ft_printf("third->next:\t%p\n", head_a->next);
	// print_stack(head_a);
	return (0);
}
