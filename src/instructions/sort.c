/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 01:25:04 by pauladretta       #+#    #+#             */
/*   Updated: 2024/12/29 03:37:11 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/push_swap.h"

void	sort(t_stack *stack_a, t_stack *stack_b)
{
	if (!check_if_stack_sorted(stack_a) && stack_a->size > 1)
	{
		if (stack_a->size == 2)
			sa(stack_a);
		else if (stack_a->size == 3)
			sort_3(stack_a);
		else if (stack_a->size == 4)
			sort_4(stack_a, stack_b);
		else if (stack_a->size == 5)
			sort_5(stack_a, stack_b);
		else
			radix_sort(stack_a, stack_b);
	}
}

int	distance_from_top(t_stack *stack, int index)
{
	t_node	*current;
	int		distance;

	if (stack == NULL || stack->size == 0 || index >= stack->size || index < 0)
		return (-1);
	distance = 0;
	current = stack->head;
	while (1)
	{
		if (current->index == index)
			break ;
		current = current->next;
		distance++;
	}
	return (distance);
}

void	sort_3(t_stack *stack_a)
{
	if (check_if_stack_sorted(stack_a))
		return ;
	if (stack_a->head->index > stack_a->head->next->index
		&& stack_a->head->index > stack_a->head->next->next->index)
	{
		ra(stack_a, 1);
	}
	else if (stack_a->head->next->index > stack_a->head->index
		&& stack_a->head->next->index > stack_a->head->next->next->index)
	{
		rra(stack_a, 1);
	}
	if (stack_a->head->index > stack_a->head->next->index)
	{
		sa(stack_a);
	}
}

void	sort_4(t_stack *stack_a, t_stack *stack_b)
{
	int	distance;

	distance = distance_from_top(stack_a, 0);
	if (distance < stack_a->size / 2)
	{
		while (stack_a->head->index != 0)
			ra(stack_a, 1);
	}
	else
	{
		while (stack_a->head->index != 0)
			rra(stack_a, 1);
	}
	pb(stack_a, stack_b);
	sort_3(stack_a);
	pa(stack_a, stack_b);
}

void	sort_5(t_stack *stack_a, t_stack *stack_b)
{
	int	distance;

	distance = distance_from_top(stack_a, 0);
	if (distance <= stack_a->size / 2)
		while (stack_a->head->index != 0)
			ra(stack_a, 1);
	else
		while (stack_a->head->index != 0)
			rra(stack_a, 1);
	pb(stack_a, stack_b);
	distance = distance_from_top(stack_a, 1);
	if (distance < stack_a->size / 2)
		while (stack_a->head->index != 1)
			ra(stack_a, 1);
	else
		while (stack_a->head->index != 1)
			rra(stack_a, 1);
	pb(stack_a, stack_b);
	sort_3(stack_a);
	pa(stack_a, stack_b);
	pa(stack_a, stack_b);
}
