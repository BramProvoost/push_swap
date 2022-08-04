/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: bprovoos <bprovoos@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/17 12:40:20 by bprovoos      #+#    #+#                 */
/*   Updated: 2022/01/28 13:39:15 by bprovoos      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

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
		write_on_top_of_stack(&stack_a, atoi(argv[i]));
		i--;
	}
	if (is_sorted(stack_a, stack_b))
		return (free_stacks(&stack_a, &stack_b));
	pick_sorting_methode(&stack_a, &stack_b, argc - 1);
	return (free_stacks(&stack_a, &stack_b));
}
