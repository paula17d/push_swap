/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 16:03:38 by pdrettas          #+#    #+#             */
/*   Updated: 2024/12/21 06:12:10 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/push_swap.h"

// takes the first element at the top of B and puts it on A.
// does nothing if B is empty. 
void pa(t_stack *stack_a, t_stack *stack_b)
{
	t_node *node;
	
	if (stack_b->size > 0)
	{
		node = extract_node(stack_b, TOP);
		insert_node(stack_a, node, TOP);
	}
	write(1, "pa\n", 3);
}	

void pb(t_stack *stack_a, t_stack *stack_b)
{
	t_node *node;

	if (stack_a->size > 0)
	{
		node = extract_node(stack_a, TOP);
		insert_node(stack_b, node, TOP);
	}
	write(1, "pb\n", 3);
}
