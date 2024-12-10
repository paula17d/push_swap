/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauladrettas <pauladrettas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 15:30:11 by pauladretta       #+#    #+#             */
/*   Updated: 2024/12/10 18:31:10 by pauladretta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/push_swap.h"

int is_str_number(char *str)
{
    int i;
    
    if (str == NULL)
        return (0);

    i = 0;
    while (str != NULL && str[i] != '\0')
    {
        if (!(str[i] >= '0' && str[i] <= '9'))
        {
            return(0);
        }
        i++;
    }
    return(1);
}

int split_strings(char *str)
{
    int i;
    int num_of_str;
    
    char **splitted_string;
    
    splitted_string = ft_split(str, ' ');
    
    i = 0;
    num_of_str = 0;
    while (splitted_string[i] != NULL)
    {
        if (is_str_number(splitted_string[i]) == 0)
        {
            ft_free_2d(splitted_string);
            return(0);
        }
        i++;
    }
    num_of_str = i;
    ft_free_2d(splitted_string);
    return(num_of_str);
}

int *build_array_of_numbers(int result, int argc, char **argv)
{
    int *num;
    int i;
    int j;
    int k;
    char **splitted_string;
    
    num = malloc(result * sizeof(int));
    if (num == NULL)
        return (NULL);
    k = 0;
    j = 1;
    while (j < argc)
    {
        splitted_string = ft_split(argv[j], ' ');
        i = 0;
        while (splitted_string[i] != NULL)
        {
            num[k] = atoi(splitted_string[i]);
            k++;
            i++;
        }
        ft_free_2d(splitted_string);
        j++;
    }
    return(num);
}

