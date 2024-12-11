/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauladrettas <pauladrettas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 14:56:59 by pauladretta       #+#    #+#             */
/*   Updated: 2024/12/11 13:26:42 by pauladretta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>
#include "libft/libft.h"
#include <stdlib.h> 
#include <stdbool.h>

// struct node s_list
// {
//     int value;
//     int index;
//     struct node *next;
// }t_list;


int is_str_number(char *str);
int split_strings(char *str);
int *build_array_of_numbers(int result, int argc, char **argv);
int check_for_duplicates(int *array, int size);
int *sort_array(int *array, int size);
void bubble_sort(int *arr, int n);
int *assigning_index_based_on_number_size(int *array, int *sorted_array, int size);
int check_str_digits_size(int argc, char **argv);
void print_array_int(char *array_name, int *array, int size);

#endif