/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauladrettas <pauladrettas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 14:55:02 by pauladretta       #+#    #+#             */
/*   Updated: 2024/12/11 13:17:54 by pauladretta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Includes/push_swap.h"

// cc -Wall -Wextra -Werror *.c ./src/*.c
// cc -Wall -Wextra -Werror *.c ./src/*.c ./Includes/libft/*.c

int main (int argc, char **argv)
{
    int size;
    int *numbers;
    int duplicate;
    int *sorted_array;
    int *index_array;
    int i;
    
    size = check_str_digits_size(argc, argv);
    if (size == 0)
    {
        printf("error\n");
        return (1);
    }
    numbers = build_array_of_numbers(size, argc, argv);
    if (numbers == NULL)
    {
        printf("error\n");
        return (1);
    }

   
    // int num[] = {34, 28, 0, 0, 88, 99, 67};
    
    duplicate = check_for_duplicates(numbers, size);
    if (duplicate == 0)
    {
        printf("error\n");
        return (1);
    }

    sorted_array = sort_array(numbers, size);
    if (sorted_array == NULL)
    {
        free(numbers);
        printf("error\n");
        return (1);
    }
    i = 0;
    printf("sorted array = {");
    while (i < size)
    {
        printf("%d,", sorted_array[i]); 
        i++;
    }
    printf("}\n");

    index_array = assigning_index_based_on_number_size(numbers, sorted_array, size);
    if (index_array == NULL)
    {
        free(numbers);
        free(sorted_array);
        printf("error\n");
        return (1);
    }
    printf("index array = {");
    i = 0;
    while (i < size)
    {
        printf("%d,", index_array[i]);  
        i++;  
    }
    printf("}\n");
    return (0);
}

