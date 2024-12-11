/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauladrettas <pauladrettas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 05:20:16 by pauladretta       #+#    #+#             */
/*   Updated: 2024/12/11 11:37:42 by pauladretta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "../Includes/push_swap.h"

// int create_list(int *array, int size)
// {
//     t_list *head;
//     t_list *new_node;
//     t_list *current;
    
//     int i;

//     i = 0;
//     if (array == NULL)
//         return (NULL);

//     *head = malloc (sizeof(t_list)); 
//     if (head == NULL)
//         return (NULL);
    
//     head->value = array[0];
//     head->index = i;
//     head->next = NULL; 
    
//     current = head;
//     while (i < size)
//     {
//         i++;
//         *new_node = malloc(sizeof(struct node)); 
//         new_node->value = array[i];
//         new_node->index = i;
//         new_node->next = NULL;

//         current->next = new_node;
//         current = new_node;
//     }    
// 	return (head);
// }

// int count_of_nodes(struct node *head)
// {
// 	int count;
    
// 	if (head == NULL)
// 	{
// 		return ;
// 	}
// 	struct node *ptr = NULL;
// 	ptr = head;

// 	count = 0;
// 	while (ptr != NULL)
// 	{
// 		count++;
// 		ptr = ptr->link; 
// 	}

//     return (count);
// }
