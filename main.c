/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauladrettas <pauladrettas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 14:55:02 by pauladretta       #+#    #+#             */
/*   Updated: 2024/12/11 17:02:31 by pauladretta      ###   ########.fr       */
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
    
    return (0);
}

// TODO: from subject all functions coden (sa, ...) (guide)