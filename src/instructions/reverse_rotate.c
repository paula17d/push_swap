/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 16:03:35 by pdrettas          #+#    #+#             */
/*   Updated: 2024/12/15 16:24:35 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/push_swap.h"

// shifts all elements in stack A down one position.
// the last element becomes the first.
void rra(t_stack *stack_a)
{
	t_node *node;
	
	node = extract_node(stack_a, BOTTOM);
	insert_node(stack_a, node, TOP);
}

void rrb(t_stack *stack_b)
{
	t_node *node;
	
	node = extract_node(stack_b, BOTTOM);
	insert_node(stack_b, node, TOP);
}

void rrr(t_stack *stack_a, t_stack *stack_b)
{
	rra(stack_a);
	rrb(stack_b);
}
