/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_allocations.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 03:24:47 by pdrettas          #+#    #+#             */
/*   Updated: 2024/12/28 06:05:48 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/push_swap.h"

void	free_stack(t_stack *stack)
{
	t_node	*current;

	if (stack->size == 1)
	{
		free(stack->head);
	}
	else if (stack->size > 1)
	{
		current = stack->head->next;
		while (1)
		{
			free(current->prev);
			if (current == stack->tail)
			{
				free(stack->tail);
				break ;
			}
			current = current->next;
		}
	}
	free(stack);
}

void	free_stacks(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a != NULL)
		free_stack(stack_a);
	if (stack_b != NULL)
		free_stack(stack_b);
}
