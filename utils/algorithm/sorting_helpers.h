/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sorting_helpers.h                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: bprovoos <bprovoos@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/22 13:01:10 by bprovoos      #+#    #+#                 */
/*   Updated: 2022/01/28 12:36:37 by bprovoos      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORTING_HELPERS_H
# define SORTING_HELPERS_H

# include "main.h"
# include <limits.h>

/* sorting_helpers.c */
void	pick_sorting_methode(t_node **stack_a, t_node **stack_b, int stack_len);
int		stack_length(t_node *stack);
void	get_limits_numbers(t_node *stack, int *lowest, int *highest);
void	pb_position(t_node **stack_a, t_node **stack_b, int pos);
void	pb_lowest(t_node **stack_a, t_node **stack_b);
int		get_first_pos_of_value(t_node *stack, int min, int max);
int		get_last_pos_of_value(t_node *stack, int min, int max);
int		get_k_smallest(t_node *stack, int k);
int		get_k_biggest(t_node *stack, int k);
int		r_b_top(t_node **stack, int value);
int		r_s_top(t_node **stack, int value);
void	move_to_stack_b_in_buckets(t_node **stack_a, t_node **stack_b, int bucket_size);
void	move_in_order_to_stack_a(t_node **stack_a, t_node **stack_b);
int		is_sorted(t_node *stack_a, t_node *stack_b);
int		free_stacks(t_node **stack_a, t_node **stack_b);

/* sort_len_2.c */
void	sort_len_2(t_node **stack);

/* sort_len_3.c */
void	sort_len_3(t_node **stack);

/* sort_len_5.c */
void	sort_len_5(t_node **stack_a, t_node **stack_b);

/* sort_len_100.c */
void	sort_len_100(t_node **stack_a, t_node **stack_b);

/* sort_len_500.c */
void	sort_len_500(t_node **stack_a, t_node **stack_b);

#endif
