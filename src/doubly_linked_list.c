/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doubly_linked_list.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 12:49:48 by pdrettas          #+#    #+#             */
/*   Updated: 2024/12/28 06:04:26 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/push_swap.h"

void	insert_node_top(t_stack *stack, t_node *inserted_node)
{
	if (stack->size == 0)
	{
		stack->head = inserted_node;
		stack->tail = inserted_node;
	}
	else
	{
		inserted_node->next = stack->head;
		stack->head->prev = inserted_node;
		stack->head = inserted_node;
	}
	stack->size++;
}

void	insert_node_bottom(t_stack *stack, t_node *inserted_node)
{
	if (stack->size == 0)
	{
		stack->head = inserted_node;
		stack->tail = inserted_node;
	}
	else
	{
		inserted_node->prev = stack->tail;
		stack->tail->next = inserted_node;
		stack->tail = inserted_node;
	}
	stack->size++;
}

t_node	*extract_node_top(t_stack *stack)
{
	t_node	*extracted_node;

	extracted_node = NULL;
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
	extracted_node->prev = NULL;
	extracted_node->next = NULL;
	stack->size--;
	return (extracted_node);
}

t_node	*extract_node_bottom(t_stack *stack)
{
	t_node	*extracted_node;

	extracted_node = NULL;
	extracted_node = stack->tail;
	stack->tail = extracted_node->prev;
	stack->tail->next = NULL;
	if (stack->size == 1)
	{
		stack->head = NULL;
	}
	else
	{
		stack->tail->next = NULL;
	}
	extracted_node->prev = NULL;
	extracted_node->next = NULL;
	stack->size--;
	return (extracted_node);
}

t_node	*create_node(int value, int index)
{
	t_node	*new_node;

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
