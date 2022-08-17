/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.h                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: bprovoos <bprovoos@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/18 10:18:06 by bprovoos      #+#    #+#                 */
/*   Updated: 2022/08/17 13:18:50 by bprovoos      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

# include <stdlib.h>
# include <limits.h>
# include "libft.h"
# include "ft_printf.h"

typedef struct s_node
{
	int				value;
	struct s_node	*next;
}					t_node;

/* utils/algorithm/klimit.c */
int		get_k_smallest(t_node *stack, int k);
int		get_k_biggest(t_node *stack, int k);

/* utils/algorithm/move_in_order.c */
void	move_to_sb_in_buckets(t_node **stack_a, t_node **stack_b, int bs);
void	move_in_order_to_stack_a(t_node **stack_a, t_node **stack_b);

/* utils/algorithm/pb_low.c */
void	pb_position(t_node **stack_a, t_node **stack_b, int pos);
void	pb_lowest(t_node **stack_a, t_node **stack_b);

/* utils/algorithm/sort_len_2.c */
void	sort_len_2(t_node **stack);

/* utils/algorithm/sort_len_3.c */
void	sort_len_3(t_node **stack);

/* utils/algorithm/sort_len_5.c */
void	sort_len_5(t_node **stack_a, t_node **stack_b);

/* utils/algorithm/sort_len_100.c */
void	sort_len_100(t_node **stack_a, t_node **stack_b);

/* utils/algorithm/sort_len_500.c */
void	sort_len_500(t_node **stack_a, t_node **stack_b);

/* utils/algorithm/sorting_helpers.c */
void	pick_sorting_methode(t_node **stack_a, t_node **stack_b, int stack_len);
int		get_first_pos_of_value(t_node *stack, int min, int max);
int		get_last_pos_of_value(t_node *stack, int min, int max);
int		r_b_top(t_node **stack, int value);
int		r_s_top(t_node **stack, int value);

/* utils/algorithm/stack_helpers.c */
void	print_stacks(t_node *stack_a, t_node *stack_b);
int		stack_length(t_node *stack);
int		is_sorted(t_node *stack_a, t_node *stack_b);
void	free_stack(t_node **stack);
int		free_stacks(t_node **stack_a, t_node **stack_b);

/* utils/commands/push_helper.c */
void	write_on_top_of_stack(t_node **head, int value);
void	delete_from_top_of_stack(t_node **head);

/* utils/commands/push.c */
void	pa(t_node **stack_a, t_node **stack_b);
void	pb(t_node **stack_a, t_node **stack_b);

/* utils/commands/reverse_rotate_helper.c */
void	rotate_reverse(t_node **head);

/* utils/commands/reverse_rotate.c */
void	rra(t_node **stack_a);
void	rrb(t_node **stack_b);
void	rrr(t_node **stack_a, t_node **stack_b);

/* utils/commands/rotate_helper.c */
t_node	*tail_of_stack(t_node *head);
void	rotate(t_node **head);

/* utils/commands/rotate.c */
void	ra(t_node **stack_a);
void	rb(t_node **stack_b);
void	rr(t_node **stack_a, t_node **stack_b);

/* utils/commands/swap_helper.c */
void	swap(t_node **head);

/* utils/commands/swap.c */
void	sa(t_node **stack_a);
void	sb(t_node **stack_b);
void	ss(t_node **stack_a, t_node **stack_b);

/* utils/input_check/input_check.c */
int		is_numbers(int argc, char **argv);
int		has_duplicates(int argc, char **argv);
void	input_checker(int argc, char **argv);

# ifndef PRINT_STACK
#  define PRINT_STACK	0
# endif

# ifndef MY_COLORS
#  define MY_COLORS

#  define NC "\033[0m"
#  define RED "\033[38;5;1m"
#  define GREEN "\033[38;5;2m"
#  define YELLOW "\033[38;5;3m"
#  define BLUE "\033[38;5;4m"
#  define MAGENTA "\033[38;5;5m"
#  define CYAN "\033[38;5;6m"
#  define WHITE "\033[38;5;7m"
#  define GRAY "\033[38;5;8m"

# endif
#endif
