/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push.h                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: bprovoos <bprovoos@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/21 08:50:53 by bprovoos      #+#    #+#                 */
/*   Updated: 2022/01/21 09:12:42 by bprovoos      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_H
# define PUSH_H

# include "main.h"

/* push.c */
void	pa(t_node **stack_a, t_node **stack_b);
void	pb(t_node **stack_a, t_node **stack_b);

/* pushz_helper.c */
void	wotos(t_node **head, int value);
void	dotos(t_node **head);

#endif
