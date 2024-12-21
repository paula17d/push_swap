/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 14:55:02 by pauladretta       #+#    #+#             */
/*   Updated: 2024/12/21 05:56:43 by pdrettas         ###   ########.fr       */
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
        printf("Error\n");
        return (1);
    }
    
    // pb(stack_a, stack_b);
    // swap(stack_b);
    // print_stack(stack_b, "stack B");

    rrr(stack_a, stack_b);
    print_stack(stack_a, "stack A");
    print_stack(stack_b, "stack B");
    

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
