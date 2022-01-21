/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   reverse_rotate.h                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: bprovoos <bprovoos@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/21 09:02:55 by bprovoos      #+#    #+#                 */
/*   Updated: 2022/01/21 09:11:53 by bprovoos      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef REVERSE_ROTATE
# define REVERSE_ROTATE

# include "main.h"

/* reverse_rotate.c */
void	rra(t_node **stack_a);
void	rrb(t_node **stack_b);
void	rrr(t_node **stack_a, t_node **stack_b);

/* reverse_rotate _helper.c */
void	rotateReverse(t_node **head);

#endif
