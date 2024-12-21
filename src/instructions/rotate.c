/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 15:56:58 by pdrettas          #+#    #+#             */
/*   Updated: 2024/12/21 05:45:37 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/push_swap.h"

// shifts all elements in stack A upwards by one position. 
// the first element becomes the last.

void ra(t_stack *stack_a, int print)
{
	t_node *node;
	
	if (stack_a->size > 1)
	{
		node = extract_node(stack_a, TOP);
		insert_node(stack_a, node, BOTTOM);	
	}
	
	if (print == 1)
	{
		write(1, "ra\n", 3);			
	}
}

void rb(t_stack *stack_b, int print)
{
	t_node *node;

	if (stack_b->size > 1)
	{
		node = extract_node(stack_b, TOP);
		insert_node(stack_b, node, BOTTOM);	
	}
	if (print == 1)
	{
		write(1, "rb\n", 3);
	}
}

void rr(t_stack *stack_a, t_stack *stack_b)
{
	ra(stack_a, 0);
	rb(stack_b, 0);
	write(1, "rr\n", 3);
}

// void rotate(t_stack *stack)
// {
// 	t_node *temp;

// 	temp = stack->head;
// 	stack->head = head->next;
	
// 	// while () dont need now bc of doubllinked list functions
// 	// {
// 	// 	head->next = head->next->next;
// 	// }

// 	head->next = stack->tail; 
// 	stack->tail = temp;
// 	stack->tail->next = NULL;
	
// 	// ft extract head
// 	// add at end
// }