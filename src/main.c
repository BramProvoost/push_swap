/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: bprovoos <bprovoos@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/17 12:40:20 by bprovoos      #+#    #+#                 */
/*   Updated: 2022/01/22 16:05:26 by bprovoos      ########   odam.nl         */
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
	ft_printf(YELLOW"A\tB\n"GREEN);
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
	ft_printf(YELLOW"-\t-\n"NO_COLOR);
}

int	main(int argc, char **argv)
{
	int	i;
	t_node	*stack_a;
	t_node	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	inputChecker(argc, argv);
	i = argc - 1;
	while (i)
	{
		wotos(&stack_a, atoi(argv[i]));
		i--;
	}
	print_stacks(stack_a, stack_b);
	// pick_sorting_methode(&stack_a, &stack_b, argc - 1);
	pb_lowest(&stack_a, &stack_b);
	print_stacks(stack_a, stack_b);
	/* Free stacks */
	return (0);
}
