/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 02:55:39 by pdrettas          #+#    #+#             */
/*   Updated: 2024/12/28 02:55:53 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/push_swap.h"

t_stack	*get_empty_stack(void)
{
	t_stack	*stack;

	stack = malloc(1 * sizeof(t_stack));
	if (stack == NULL)
		return (NULL);
	stack->head = NULL;
	stack->tail = NULL;
	stack->size = 0;
	return (stack);
}

t_node	*get_node(int value, int index)
{
	t_node	*node;

	node = malloc(1 * sizeof(t_node));
	if (!node)
	{
		return (NULL);
	}
	node->value = value;
	node->index = index;
	node->prev = NULL;
	node->next = NULL;
	return (node);
}

t_stack	*set_stack(long *array, int *index_array, int size)
{
	t_stack	*stack;
	t_node	*node;

	stack = get_empty_stack();
	if (!stack)
	{
		return (NULL);
	}
	while (size > 0)
	{
		node = get_node(array[size - 1], index_array[size - 1]);
		if (!node)
		{
			return (NULL);
		}
		put_node_in_stack(stack, node);
		size--;
	}
	return (stack);
}

void	put_node_in_stack(t_stack *stack, t_node *node)
{
	if (stack->size == 0)
	{
		stack->head = node;
		stack->tail = node;
		(stack->size)++;
	}
	else
	{
		node->next = stack->head;
		stack->head->prev = node;
		stack->head = node;
		(stack->size)++;
	}
}
