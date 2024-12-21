/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 14:56:59 by pauladretta       #+#    #+#             */
/*   Updated: 2024/12/21 05:53:18 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>
#include "libft/libft.h"
#include <stdlib.h> 
#include <stdbool.h>

#define TOP 1
#define BOTTOM -1

typedef struct s_stack
{
    struct s_node *head;
    struct s_node *tail;
    int size;
}t_stack;

typedef struct s_node
{
    int value;
    int index;
    struct s_node *prev;
    struct s_node *next;
}t_node;

int is_str_number(char *str);
int split_strings(char *str);
int *build_array_of_numbers(int result, int argc, char **argv);
int check_for_duplicates(int *array, int size);
int *sort_array(int *array, int size);
void bubble_sort(int *arr, int n);
int *assigning_index_based_on_number_size(int *array, int *sorted_array, int size);
int check_str_digits_size(int argc, char **argv);
void print_array_int(char *array_name, int *array, int size); // kommentieren
t_stack *set_stack(int *array, int *index_array, int size);

t_stack *parsing(int argc, char **argv);
t_stack *get_empty_stack();
void swap(t_stack *stack);
void sa(t_stack *stack_a);
void sb(t_stack *stack_b);
void ss(t_stack *stack_a, t_stack *stack_b);
void put_node_in_stack(t_stack *stack, t_node *node);
void pa(t_stack *stack_a, t_stack *stack_b);
void pb(t_stack *stack_a, t_stack *stack_b);
t_node *extract_node(t_stack *stack, int position);
void insert_node(t_stack *stack, t_node *inserted_node, int position);
void print_stack(t_stack *stack, char *stack_name);
void rb(t_stack *stack_b, int print);
void ra(t_stack *stack_a, int print);
void rr(t_stack *stack_a, t_stack *stack_b);
void rra(t_stack *stack_a, int print);
void rrb(t_stack *stack_b, int print);
void rrr(t_stack *stack_a, t_stack *stack_b);


#endif
