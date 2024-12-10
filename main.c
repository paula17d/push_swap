/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauladrettas <pauladrettas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 14:55:02 by pauladretta       #+#    #+#             */
/*   Updated: 2024/12/10 18:37:33 by pauladretta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Includes/push_swap.h"

// cc -Wall -Wextra -Werror *.c ./src/*.c
// cc -Wall -Wextra -Werror *.c ./src/*.c ./Includes/libft/*.c

int main (int argc, char **argv)
{
    int i;
    int num_of_str;
    int result;
    int *numbers;
    
    (void)argc;
    // int res = is_str_number(argv[1]);
    
    i = 1;
    result = 0;
    while (i < argc)
    {
       num_of_str = split_strings(argv[i]);
        
        if (num_of_str == 0)
        {
            printf("error\n");
            return (1);
        }
        printf("num_of_str = %d\n", num_of_str);
        result = result + num_of_str;
        printf(" = %d\n", result);
        // printf("Hello World");
        i++;
    }
    numbers = build_array_of_numbers(result, argc, argv);
    if (numbers == NULL)
    {
        printf("error\n");
        return (1);
    }

    int j;
    j = 0;
    while (j < result)
    {
        printf("numbers[%d] = %d\n", j, numbers[j]);
        j++;
    }
    
    // int num[] = {34, 28, 0, 0, 88, 99, 67};
    
    return (0);
}
