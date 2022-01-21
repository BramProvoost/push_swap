/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rotate.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bprovoos <bprovoos@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/21 09:07:34 by bprovoos      #+#    #+#                 */
/*   Updated: 2022/01/21 09:12:13 by bprovoos      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROTATE_H
# define ROTATE_H

# include "main.h"

/* rotate.c */
void	ra(t_node **stack_a);
void	rb(t_node **stack_b);
void	rr(t_node **stack_a, t_node **stack_b);

/* rotate_helper.c */
t_node *tailOfStack(t_node *head);
void	rotate(t_node **head);

#endif
