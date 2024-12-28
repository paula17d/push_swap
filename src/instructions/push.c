/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 16:03:38 by pdrettas          #+#    #+#             */
/*   Updated: 2024/12/28 06:06:47 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/push_swap.h"

// takes the first element at the top of B and puts it on A.
// does nothing if B is empty. 
void	pa(t_stack *stack_a, t_stack *stack_b)
{
	t_node	*node;

	if (stack_b->size > 0)
	{
		node = extract_node_top(stack_b);
		insert_node_top(stack_a, node);
	}
	write(1, "pa\n", 3);
}

void	pb(t_stack *stack_a, t_stack *stack_b)
{
	t_node	*node;

	if (stack_a->size > 0)
	{
		node = extract_node_top(stack_a);
		insert_node_top(stack_b, node);
	}
	write(1, "pb\n", 3);
}
