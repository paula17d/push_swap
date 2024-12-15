/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 15:56:58 by pdrettas          #+#    #+#             */
/*   Updated: 2024/12/15 16:11:52 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/push_swap.h"

// shifts all elements in stack A upwards by one position. 
// the first element becomes the last.

void ra(t_stack *stack_a)
{
	t_node *node;
	
	if (stack_a == NULL || stack_a->head == NULL)
	{
		return (NULL); // ?
	}

	node = extract_node(stack_a, TOP);
	insert_node(stack_a, node, BOTTOM);	
}

void rb(t_stack *stack_b)
{
	t_node *node;
	
	if (stack_b == NULL || stack_b->head == NULL)
	{
		return (NULL); // ?
	}

	node = extract_node(stack_b, TOP);
	insert_node(stack_b, node, BOTTOM);	
}

void rr(t_stack *stack_a, t_stack *stack_b)
{
	ra(stack_a);
	rb(stack_b);
}

// int main ()
// {
	
// }


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