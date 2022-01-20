/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: bprovoos <bprovoos@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/17 12:40:20 by bprovoos      #+#    #+#                 */
/*   Updated: 2022/01/20 09:13:11 by bprovoos      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

typedef struct	s_node
{
	int				value;
	struct s_node	*next;
}					t_node;

// int	readOneAtTopOfStack(t_node *head)
// {
// 	return (0);
// }

/*
void addToFront(int data, List * head) {
    List * newNode = malloc(sizeof(List));
    newNode->data = data;
    newNode->next = head->next;
    head->next = newNode;
}
*/

/* 
    newNode->data  = num;
    // Next pointer of new node will point to head node of linked list  
    newNode->next = head;
    // make new node as new head of linked list 
    head = newNode;
*/

void	writeOneAtTopOfStack(t_node **head, int value)
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

void	removeOneAtTopOfStack(t_node **head)
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

void	print_stack(t_node *head)
{
	t_node	*node;

	node = head;
	while (node)
	{
		ft_printf("head->data:\t%d\n", node->value);
		ft_printf("head->next:\t%p\n", node->next);
		node = node->next;
	}
}

int	main(int argc, char **argv)
{
	int				i;
	t_node	*stack_a;
	t_node	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	i = 1;
	while (i < argc)
	{
		ft_printf("%s\n", argv[i]);
		i++;
	}

	writeOneAtTopOfStack(&stack_a, 5);
	removeOneAtTopOfStack(&stack_a);
	removeOneAtTopOfStack(&stack_a);
	writeOneAtTopOfStack(&stack_a, 6);
	writeOneAtTopOfStack(&stack_a, 7);
	writeOneAtTopOfStack(&stack_a, 8);
	writeOneAtTopOfStack(&stack_a, 9);

	print_stack(stack_a);
	return (0);
}
