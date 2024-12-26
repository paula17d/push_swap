/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauladrettas <pauladrettas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 15:21:53 by pauladretta       #+#    #+#             */
/*   Updated: 2024/12/26 06:54:24 by pauladretta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/push_swap.h"

int check_if_stack_sorted(t_stack *stack_a)
{
    t_node *current;
    
    current = stack_a->head;
    while(current != NULL && current->next != NULL)
    {
       if (current->index > current->next->index)
       {
            return(0);
       }
       
       current = current->next;
    }
    return (1);
}

int  calculate_length_of_binary(t_stack *stack_a) 
{
    int len_number_in_binary; 
    int value;
    
    len_number_in_binary = 0;
    value = 1;
    while (value < stack_a->size)
    {
        len_number_in_binary++;
        value = value * 2;
    }
    return (len_number_in_binary);
}

void    radix_sort(t_stack *stack_a, t_stack *stack_b)
{
    int binary_position;
    int max_len_of_binary;
    int shifted_bytes; 
    int count;

    if (check_if_stack_sorted(stack_a) == 1)
        return ;

    max_len_of_binary = calculate_length_of_binary(stack_a);

    shifted_bytes = 0;
    while (shifted_bytes < max_len_of_binary)
    {
        count = stack_a->size;
        
        while (count != 0)
        {
            if ((stack_a->head->index << shifted_bytes) &1 == 0)
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
