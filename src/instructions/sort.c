/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauladrettas <pauladrettas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 01:25:04 by pauladretta       #+#    #+#             */
/*   Updated: 2024/12/28 01:27:03 by pauladretta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/push_swap.h"

int	distance_min_from_top(t_stack *stack, int index)
{
	t_node	*current;
	int		distance;

    distance = 0;
	current = stack->head;
	while (1)
	{
        if(current->index == index)
            break;
		current = current->next;
        distance++;
	}
	return (distance);
}

void sort_3(t_stack *stack_a)
{
    if (check_if_stack_sorted(stack_a))
        return ;
    if (stack_a->head->index > stack_a->head->next->index && \
        stack_a->head->index > stack_a->head->next->next->index)
    {
        ra(stack_a, 1);
    }
    // Otherwise, if the index of thd second # is the biggest , we do rra
    else if (stack_a->head->next->index > stack_a->head->index && \
    stack_a->head->next->index > stack_a->head->next->next->index)
    {
        rra(stack_a, 1);
    }
    // Then, if the  index, we do this.
    
    if (stack_a->head->index > stack_a->head->next->index)
    {
        sa(stack_a);
    } 
    
}

void sort_4(t_stack *stack_a, t_stack *stack_b)
{
    int distance = distance_min_from_top(stack_a, 0);
    // printf("distance = %d\n", distance);
    // printf("stack_a size = %d\n", stack_a->size);
    if (stack_a->size % 2 == 0)
    {
        if (distance < stack_a->size / 2)
        {
            while(stack_a->head->index != 0)
                ra(stack_a, 1);
        }
        else
        {
            while(stack_a->head->index != 0)
                rra(stack_a, 1);
        }
    }
    pb(stack_a, stack_b);
    sort_3(stack_a);
    pa(stack_a, stack_b);
}

void sort_5(t_stack *stack_a, t_stack *stack_b)
{
    int distance;

    distance = distance_min_from_top(stack_a, 0);
    if (distance <= stack_a->size / 2)
        {
            while(stack_a->head->index != 0)
                ra(stack_a, 1);
        }
        else
        {
            while(stack_a->head->index != 0)
                rra(stack_a, 1);
        }
    pb(stack_a, stack_b);

    distance = distance_min_from_top(stack_a, 1);
   
        if (distance < stack_a->size / 2)
        {
            while (stack_a->head->index != 1)
                ra(stack_a, 1);
        }
        else
        {
            while (stack_a->head->index != 1)
                rra(stack_a, 1);
        }

    pb(stack_a, stack_b);

    sort_3(stack_a);

    pa(stack_a, stack_b);
    pa(stack_a, stack_b);
}

