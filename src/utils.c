/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 13:19:59 by pauladretta       #+#    #+#             */
/*   Updated: 2024/12/29 03:36:24 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/push_swap.h"

// void	print_array_int(char *array_name, int *array, int size)
// {
// 	int	i;

// 	printf("%s = {", array_name);
// 	i = 0;
// 	while (i < size)
// 	{
// 		if (i == size - 1)
// 			printf("%d", array[i]);
// 		else
// 			printf("%d,", array[i]);
// 		i++;
// 	}
// 	printf("}\n");
// }

// void	print_stack(t_stack *stack, char *stack_name)
// {
// 	int	i;
// 	t_node	*current;
// 	printf("**********************%s************************************\n",
// 		stack_name);
// 	current = stack->head;
// 	if (current == NULL)
// 	{
// 		printf("*************************** 
//		********************************\n");
// 		return ;
// 	}
// 	i = 0;
// 	while (1)
// 	{
// 		printf("node [%d] => value = %d; index = %d\n", i, current->value,
// 			current->index);
// 		current = current->next;
// 		if (current == NULL)
// 			break ;
// 		i++;
// 	}
// 	printf("******************************
//  **************************************\n");
// }