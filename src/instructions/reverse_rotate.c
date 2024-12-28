/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 16:03:35 by pdrettas          #+#    #+#             */
/*   Updated: 2024/12/28 06:07:25 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/push_swap.h"

// shifts all elements in stack A down one position.
// the last element becomes the first.
void	rra(t_stack *stack_a, int print)
{
	t_node	*node;

	if (stack_a->size > 1)
	{
		node = extract_node_bottom(stack_a);
		insert_node_top(stack_a, node);
	}
	if (print == 1)
	{
		write(1, "rra\n", 4);
	}
}

void	rrb(t_stack *stack_b, int print)
{
	t_node	*node;

	if (stack_b->size > 1)
	{
		node = extract_node_bottom(stack_b);
		insert_node_top(stack_b, node);
	}
	if (print == 1)
	{
		write(1, "rrb\n", 4);
	}
}

void	rrr(t_stack *stack_a, t_stack *stack_b)
{
	rra(stack_a, 0);
	rrb(stack_b, 0);
	write(1, "rrr\n", 4);
}
