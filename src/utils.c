/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauladrettas <pauladrettas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 13:19:59 by pauladretta       #+#    #+#             */
/*   Updated: 2024/12/11 16:42:53 by pauladretta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/push_swap.h"

void print_array_int(char *array_name, int *array, int size)
{
    int i;

    printf("%s = {", array_name);
    i = 0;
    while (i < size)
    {
        if(i == size -1)
            printf("%d", array[i]);
        else
            printf("%d,", array[i]);
        i++;
    }
    printf("}\n");
}


void print_stack(t_stack *stack)
{
    int i;
    t_node *current;

    current = stack->head;
    i = 0;
    while (1)
    {
        printf("node [%d] => value = %d; index = %d\n", i, current->value, current->index);
        current = current->next;
        if (current == NULL)
            break;
        i++;
    }
}