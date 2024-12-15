/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 15:30:11 by pauladretta       #+#    #+#             */
/*   Updated: 2024/12/13 14:38:46 by pdrettas         ###   ########.fr       */
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

int *build_array_of_numbers(int size, int argc, char **argv)
{
    int *num;
    int i;
    int j;
    int k;
    char **splitted_string;
    
    num = malloc(size * sizeof(int));
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

int check_for_duplicates(int *array, int size)
{
    int i;
    int j;

    if (array == NULL)
        return (0);
        
    i = 0;
    while (i < size)
    {
        j = i + 1;
        while (j < size)
        {
            if (array[i] == array[j]) 
            {
                return (0);
            }   
            j++; 
        }
        i++;
    }
    return (1);
}

t_stack *set_stack(int *array, int *index_array, int size)
{
    int i;
    t_stack *stack;
    t_node *current;

    current = malloc(1 *sizeof(t_node));
    if (current == NULL)
        return (NULL);
    stack = malloc(1 *sizeof(t_stack));
    if (stack == NULL)
        return (free(current), NULL);
    stack->head = current;
    stack->size = 0;
    i = 0;
    while (i < size)
    {
        current->value = array[i];
        current->index = index_array[i];
        if (i == size - 1)
            current->next = NULL;
        else
        {
            current->next = malloc (1 *sizeof(t_node)); // TODO: free function for all nodes
            current = current->next;   
        }
        i++;
        (stack->size)++;
    }
    stack->tail = current;
    
    return (stack);
}

int *sort_array(int *array, int size)
{
    int *sorted_array;
    int i;

    sorted_array = malloc(size * sizeof(int));
    if (sorted_array == NULL)
        return (NULL);

    i = 0;
    while (i < size)
    {
        sorted_array[i] = array[i];
        i++;
    }
    
    bubble_sort(sorted_array, size);
    
    return (sorted_array);
}

void bubble_sort(int *arr, int n)
{
    int i;
    int temp;
    int swapped;

    if (arr == NULL || n <= 1)
        return;
    
    swapped = 1;
    while (swapped == 1)
    {
        swapped = 0;
        i = 0;
        while (i < n - 1)
        {
            if (arr[i] > arr[i + 1])
            {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                swapped = 1;
            }
            i++;
        }
        n--;
    }
}

int *assigning_index_based_on_number_size(int *array, int *sorted_array, int size)
{
    int *index_array;
    int i;
    int j;
    
    index_array = malloc(size * sizeof(int));
    if (index_array == NULL)
        return (NULL);
        
    i = 0;
    while (i < size)
    {
        j = 0;
        while (j < size)
        {
            if (array[i] == sorted_array[j])
            {
               index_array[i] = j;
            }
            j++;
        }
        i++;
    }
    return(index_array);
}

int check_str_digits_size(int argc, char **argv)
{
    int i; 
    int size;
    int num_of_str;
    
    i = 1;
    size = 0;
    while (i < argc)
    {
       num_of_str = split_strings(argv[i]);
        
        if (num_of_str == 0)
        {
            return (0);
        }
        size = size + num_of_str;
        i++;
    }
    return(size);
}

t_stack *parsing(int argc, char **argv) // TODO: need free function for all
{
    int size;
    int *array;
    int duplicate;
    int *sorted_array;
    int *index_array;
    t_stack *stack;

    size = check_str_digits_size(argc, argv);
    if (size == 0)
    {
        return (NULL);
    }
    array = build_array_of_numbers(size, argc, argv);
    if (array == NULL)
    {
        return (NULL);
    }
    print_array_int("array", array, size);
    duplicate = check_for_duplicates(array, size);
    if (duplicate == 0)
    {
        return (NULL);
    }
    sorted_array = sort_array(array, size);
    if (sorted_array == NULL)
    {
        free(array);
        return (NULL);
    }
    print_array_int("sorted array", sorted_array, size);
    index_array = assigning_index_based_on_number_size(array, sorted_array, size);
    if (index_array == NULL)
    {
        free(array);
        free(sorted_array);
        return (NULL);
    }
    print_array_int("index array", index_array, size);
    
    stack = set_stack(array, index_array, size);
    if (stack == NULL)
    {
        free(array);
        free(sorted_array);
        free(index_array);
        return (NULL);
    }
    print_stack(stack);

    return (stack);
}

t_stack *get_empty_stack()
{
   t_stack *stack;
    
    stack = malloc(1 *sizeof(t_stack));
    if (stack == NULL)
        return (NULL);
        
    stack->head = NULL;
    stack->tail = NULL;
    stack->size = 0;

}
