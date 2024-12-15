/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:31:15 by pdrettas          #+#    #+#             */
/*   Updated: 2024/12/15 16:12:55 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/push_swap.h"

/* swaps the first two elements at the top of stack A.
Does nothing if there is only one or none.
*/

void swap(t_node *head) 
{
	// return if 1 or less elements
	// store head in temp
	// t_node *temp = head->next;
	// head->next = head->next->next; 
	// head->next->next = head;
	
	// t_node	*first;
	// t_node	*second;

	// first = head;
	// second = first->next;
	
	// head = second->next;
	
	// second->next = first;
	// first->next = head;
	
	// head = second;
	
	// second->index = 0;
	// first->index = 1;

	int	temp;

	if (head->next == NULL)
	{
		return NULL;
	}
	
	temp = head->value; // NEUUUU machen
	
	head->value = head->next->value;
	head->next->value = temp;

	// t_node *temp = head->next;
	// head->next = head->next->next;
	// head->next->next = temp;


	// result should be:
	// a -> b -> c
	// b -> a -> c

	// make a point to c
	// make b point to a
}

void sa(t_stack *stack_a)
{
	swap(stack_a);
	
}

void sb(t_stack *stack_b)
{
	swap(stack_b);
}

void ss(t_stack *stack_a, t_stack *stack_b)
{
	swap(stack_a);
	swap(stack_b);
}

// int	main(void) {
// 	t_node head;
// 	t_node middle;
// 	t_node bottom;
// 	head.index = 0;
// 	head.value = 1;
// 	head.next = &middle;
// 	middle.index = 1;
// 	middle.value = 2;
// 	middle.next = &bottom;
// 	bottom.index = 2;
// 	bottom.value = 3;
// 	bottom.next = NULL;

// 	s(&head);
// 	printf("head: index - %d, value - %d\n", head.index, head.value);
// 	printf("middle: index - %d, value - %d\n", middle.index, middle.value);
// 	printf("bottom: index - %d, value - %d\n", bottom.index, bottom.value);
// 	if (head.value == 2 && head.next->value == 1 && head.next->next->value == 3) {
// 		printf("success\n");
// 	} else {
// 		printf("error\n");
// 		printf("%d\n", head.value);
// 	}

// 	return (0);
// }