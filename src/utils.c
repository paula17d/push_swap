/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauladrettas <pauladrettas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 13:19:59 by pauladretta       #+#    #+#             */
/*   Updated: 2024/12/11 13:26:13 by pauladretta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/push_swap.h"

void print_array_int(char *array_name, int *array, int size)
{
    int i;

    printf("%s ={", array_name);
    i = 0;
    while (i < size)
    {
        if(i == size -1)
            printf("%d", array[i]);
        else
            printf("%d,", array[i]);
        i++;
    }
    printf("}");
}