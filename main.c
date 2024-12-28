/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauladrettas <pauladrettas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 14:55:02 by pauladretta       #+#    #+#             */
/*   Updated: 2024/12/28 01:26:38 by pauladretta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Includes/push_swap.h"

// cc -Wall -Wextra -Werror *.c ./src/*.c
// cc -Wall -Wextra -Werror *.c ./src/*.c ./Includes/libft/*.c

int main (int argc, char **argv)
{
    t_stack *stack_a;
    t_stack *stack_b;

      
    
    stack_a = parsing(argc, argv);
    stack_b = get_empty_stack();
    
    if (stack_a == NULL || stack_b == NULL)
    {
        write(2, "Error", 5);
        // printf("Error");
        return (1);
    }
    // print_stack(stack_a, "stack A");
    // print_stack(stack_b, "stack B");
    if(!check_if_stack_sorted(stack_a) && stack_a->size > 1)

    {
        
        
        if (stack_a->size == 2)
        {
            sa(stack_a);
        }
        // If the index of the first number is the biggest, we do ra
        else if (stack_a->size == 3)
        {
            sort_3(stack_a);
        }
       else if (stack_a->size == 4)
{
	sort_4(stack_a, stack_b);
        }

else if (stack_a->size == 5)
{
    sort_5(stack_a, stack_b);
}


        
        else 
            radix_sort(stack_a, stack_b);
        
    }
    
    // free_stack(stack_a);
    // free_stack(stack_b);
    
    // print_stack(stack_a, "Stack A");
    
    // pb(stack_a, stack_b);
    // swap(stack_b);
    // print_stack(stack_b, "stack B");

    // rrr(stack_a, stack_b);
    // print_stack(stack_a, "stack A");
    // print_stack(stack_b, "stack B");
    

    // rra(stack_a);
    // print_stack(stack_a, "stack A");
    
    // ss(stack_a, stack_b);
    
    // pb(stack_a, stack_b);
    // pb(stack_a, stack_b);
    // print_stack(stack_a, "stack A");
    // print_stack(stack_b, "stack B");
    
    // pa(stack_a, stack_b);
    // pa(stack_a, stack_b);
    // print_stack(stack_a, "stack A");
    // print_stack(stack_b, "stack B");
    
    return (0);
}
