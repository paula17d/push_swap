/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 14:55:02 by pauladretta       #+#    #+#             */
/*   Updated: 2024/12/29 03:34:41 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	int		size;

	size = -1;
	stack_a = parsing(argc, argv, &size, -1);
	stack_b = get_empty_stack();
	if (size == 0)
	{
		free_stacks(stack_a, stack_b);
		write(2, "", 1);
		return (0);
	}
	if (stack_a == NULL || stack_b == NULL)
	{
		free_stacks(stack_a, stack_b);
		write(2, "Error\n", 6);
		return (1);
	}
	sort(stack_a, stack_b);
	free_stacks(stack_a, stack_b);
	return (0);
}
