/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 15:56:58 by pdrettas          #+#    #+#             */
/*   Updated: 2024/12/28 06:07:41 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/push_swap.h"

// shifts all elements in stack A upwards by one position.
// the first element becomes the last.

void	ra(t_stack *stack_a, int print)
{
	t_node	*node;

	if (stack_a->size > 1)
	{
		node = extract_node_top(stack_a);
		insert_node_bottom(stack_a, node);
	}
	if (print == 1)
	{
		write(1, "ra\n", 3);
	}
}

void	rb(t_stack *stack_b, int print)
{
	t_node	*node;

	if (stack_b->size > 1)
	{
		node = extract_node_top(stack_b);
		insert_node_bottom(stack_b, node);
	}
	if (print == 1)
	{
		write(1, "rb\n", 3);
	}
}

void	rr(t_stack *stack_a, t_stack *stack_b)
{
	ra(stack_a, 0);
	rb(stack_b, 0);
	write(1, "rr\n", 3);
}
