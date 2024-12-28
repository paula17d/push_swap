/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 15:21:53 by pauladretta       #+#    #+#             */
/*   Updated: 2024/12/28 02:58:18 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/push_swap.h"

int	check_if_stack_sorted(t_stack *stack_a)
{
	t_node	*current;

	current = stack_a->head;
	while (current != NULL && current->next != NULL)
	{
		if (current->index > current->next->index)
		{
			return (0);
		}
		current = current->next;
	}
	return (1);
}

// static int	calculate_length_of_binary(t_stack *stack_a)
// {
// 	int	exponent;

// 	exponent = 0;
// 	while (1)
// 	{
// 		if (stack_a->size <= 1 << exponent)
// 			return (exponent);
// 		else
// 			exponent++;
// 	}
// }

int	calculate_length_of_binary(t_stack *stack_a)
{
	int	len_number_in_binary;
	int	value;

	len_number_in_binary = 0;
	value = 1;
	while (value < stack_a->size)
	{
		len_number_in_binary++;
		value = value * 2;
	}
	return (len_number_in_binary);
}

void	radix_sort(t_stack *stack_a, t_stack *stack_b)
{
	int	max_len_of_binary;
	int	shifted_bytes;
	int	count;

	if (check_if_stack_sorted(stack_a) == 1)
		return ;
	max_len_of_binary = calculate_length_of_binary(stack_a);
	shifted_bytes = 0;
	while (shifted_bytes < max_len_of_binary)
	{
		count = stack_a->size;
		while (count != 0)
		{
			if (((stack_a->head->index >> shifted_bytes) & 1) == 0)
				pb(stack_a, stack_b);
			else
				ra(stack_a, 1);
			count--;
		}
		while (stack_b->size != 0)
			pa(stack_a, stack_b);
		shifted_bytes++;
	}
}

// int	check_if_sorted(t_stack *stack_a)
// {
// 	t_node	*current_node;

// 	current_node = stack_a->head;
// 	while (current_node != NULL)
// 	{
// 		if (current_node->next != NULL)
// 		{
// 			if (current_node->value > current_node->next->value)
// 				return (0);
// 		}
// 		current_node = current_node->next;
// 	}
// 	return (1);
// }

// static int	calculate_length_of_binary(t_stack *stack_a);

// void	radix_sort(t_stack *stack_a, t_stack *stack_b)
// {
// 	int	length_of_binary;
// 	int	pos_in_binary;
// 	int	pos_in_stack;

// 	length_of_binary = calculate_length_of_binary(stack_a);
// 	pos_in_binary = 0;
// 	while (pos_in_binary < length_of_binary)
// 	{
// 		if (check_if_sorted(stack_a))
// 			return ;
// 		pos_in_stack = 0;
// 		while (pos_in_stack < stack_a->size)
// 		{
// 			if ((stack_a->head->index >> pos_in_binary & 1) == 0)
// 				pb(stack_a, stack_b);
// 			else
// 			{
// 				ra(stack_a, 1);
// 				pos_in_stack++;
// 			}
// 		}
// 		while (0 < stack_b->size)
// 			pa(stack_a, stack_b);
// 		pos_in_binary++;
// 	}
// }
