/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:31:15 by pdrettas          #+#    #+#             */
/*   Updated: 2024/12/28 02:43:47 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/push_swap.h"

/* swaps the first two elements at the top of stack A.
Does nothing if there is only one or none.
*/

void	swap(t_stack *stack)
{
	t_node	*node1;
	t_node	*node2;

	if (stack->size > 1)
	{
		node1 = extract_node_top(stack);
		node2 = extract_node_top(stack);
		insert_node_top(stack, node1);
		insert_node_top(stack, node2);
	}
}

void	sa(t_stack *stack_a)
{
	swap(stack_a);
	write(1, "sa\n", 3);
}

void	sb(t_stack *stack_b)
{
	swap(stack_b);
	write(1, "sb\n", 3);
}

void	ss(t_stack *stack_a, t_stack *stack_b)
{
	swap(stack_a);
	swap(stack_b);
	write(1, "ss\n", 3);
}
