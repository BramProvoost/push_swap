/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sorting_helpers.h                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: bprovoos <bprovoos@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/22 13:01:10 by bprovoos      #+#    #+#                 */
/*   Updated: 2022/01/22 16:04:57 by bprovoos      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORTING_HELPERS_H
# define SORTING_HELPERS_H

# include "main.h"

/* sorting_helpers.c */
void	pick_sorting_methode(t_node **stack_a, t_node **stack_b, int stack_len);
int		stack_length(t_node *stack);
void	get_limits_numbers(t_node *stack, int *lowest, int *highest);
void	pb_position(t_node **stack_a, t_node **stack_b, int pos);
void	pb_lowest(t_node **stack_a, t_node **stack_b);

/* sort_len_2.c */
void	sort_len_2(t_node **stack);

/* sort_len_3.c */
void	sort_len_3(t_node **stack);

/* sort_len_5.c */
void	sort_len_5(t_node **stack_a, t_node **stack_b, int stack_len);

#endif
