/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: bprovoos <bprovoos@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/17 12:40:20 by bprovoos      #+#    #+#                 */
/*   Updated: 2022/01/21 15:44:25 by bprovoos      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	print_stacks(t_node *stack_a, t_node *stack_b)
{
	t_node	*node_a;
	t_node	*node_b;

	if (PRINT_STACK != 1)
		return ;
	node_a = stack_a;
	node_b = stack_b;
	ft_printf(BLUE"A\tB\n"GREEN);
	while (node_a != NULL || node_b != NULL)
	{
		if (node_a != NULL)
		{
			ft_printf("%d\t", node_a->value);
			node_a = node_a->next;
		}
		else
			ft_printf("\t");
		if (node_b != NULL)
		{
			ft_printf("%d\n", node_b->value);
			node_b = node_b->next;	
		}
		else
			ft_printf("\n");
	}
	ft_printf(BLUE"=\t=\n"NO_COLOR);
}

int	main(int argc, char **argv)
{
	t_node	*stack_a;
	t_node	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	inputChecker(argc, argv);
	while (argc > 1)
	{
		argc--;
		wotos(&stack_a, atoi(argv[argc]));
	}
	print_stacks(stack_a, stack_b);
	// pb(&stack_a, &stack_b);
	// print_stacks(stack_a, stack_b);
	// sa(&stack_a);
	// print_stacks(stack_a, stack_b);
	// pa(&stack_a, &stack_b);
	// print_stacks(stack_a, stack_b);
	return (0);
}
