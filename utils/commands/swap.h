/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   swap.h                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: bprovoos <bprovoos@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/21 09:10:18 by bprovoos      #+#    #+#                 */
/*   Updated: 2022/01/21 09:13:20 by bprovoos      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SWAP_H
# define SWAP_H

# include "main.h"

/* swap.c */
void	sa(t_node **stack_a);
void	sb(t_node **stack_b);
void	ss(t_node **stack_a, t_node **stack_b);

/* swap_helper.c */
void	swap(t_node **head);

#endif
