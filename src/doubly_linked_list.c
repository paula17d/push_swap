/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doubly_linked_list.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 12:49:48 by pdrettas          #+#    #+#             */
/*   Updated: 2024/12/15 16:40:44 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/push_swap.h"

// typedef struct s_stack
// {
//     struct s_node *head;
//     struct s_node *tail;
//     int size;
// }t_stack;

// typedef struct s_node
// {
//     int value;
//     int index;
//     struct s_node *prev;
//     struct s_node *next;
// }t_node;

void insert_node(t_stack *stack, t_node *inserted_node, int position)
{	
	if (stack->size == 0)
	{
		stack->head = inserted_node;
		stack->tail = inserted_node;
	}
	
	// at top (head)
	if (position == TOP)
	{
		inserted_node->next = stack->head;
		stack->head->prev = inserted_node;
		stack->head = inserted_node;
	}

	// at bottom (tail)
	else if (position == BOTTOM)
	{
		inserted_node->prev = stack->tail;
		stack->tail->next = inserted_node;
		stack->tail = inserted_node;
	}
	
	stack->size++;
}

t_node *extract_node(t_stack *stack, int position)
{
	// removes node from top (head) or bottom (tail) and returns it
	t_node *extracted_node;
	
	if (position == TOP)
	{
		extracted_node = stack->head;
		stack->head = extracted_node->next;
		if (stack->size == 1)
		{
			stack->tail = NULL;
		}
		else 
		{
			stack->head->prev = NULL;
		}
	}
	
	else if (position == BOTTOM)
	{
		extracted_node = stack->tail;
		stack->tail = extracted_node->prev;
		stack->tail->next = NULL; 
		if (stack->size == 1) // if after node removed was then one last remaining, then head and tail need to be updated
		{
			stack->head = NULL;
		}
		else 
		{
			stack->tail->next = NULL;
		}
	}
	
	extracted_node->prev = NULL;
	extracted_node->next = NULL;
	stack->size--;
	
	return(extracted_node);
}

t_node *create_node(t_stack *stack, int value, int index)
{
	t_node *new_node;
	
	new_node = malloc(1 * sizeof(t_node));
	if (!new_node)
	{
		return (NULL);
	}
	
	new_node->value = value;
	new_node->index = index;
	new_node->next = NULL;
	new_node->prev = NULL;
	
	return (new_node);	
}

// delete stack function