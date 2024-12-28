/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauladrettas <pauladrettas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 01:24:58 by pauladretta       #+#    #+#             */
/*   Updated: 2024/12/28 01:30:07 by pauladretta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdio.h>
#include "libft/libft.h"
#include <stdlib.h> 
#include <stdbool.h>
#include <limits.h>

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
long *build_array_of_numbers(int size, int argc, char **argv);
int check_for_duplicates(long *array, int size);
int *sort_array(long *array, int size);
void bubble_sort(int *arr, int n);
int *assigning_index_based_on_number_size(long *array, int *sorted_array, int size);
int check_str_digits_size(int argc, char **argv);
void print_array_int(char *array_name, int *array, int size); // kommentieren
t_stack *set_stack(long *array, int *index_array, int size);

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
void radix_sort(t_stack *stack_a, t_stack *stack_b);
int check_if_stack_sorted(t_stack *stack_a);
void sort_3(t_stack *stack_a);
void free_stack(t_stack *stack);
int	distance_min_from_top(t_stack *stack, int index);
void sort_5(t_stack *stack_a, t_stack *stack_b);
void sort_4(t_stack *stack_a, t_stack *stack_b);

#endif
