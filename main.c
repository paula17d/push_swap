/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 14:55:02 by pauladretta       #+#    #+#             */
/*   Updated: 2024/12/28 05:58:04 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Includes/push_swap.h"

// cc -Wall -Wextra -Werror *.c ./src/*.c
// cc -Wall -Wextra -Werror *.c ./src/*.c ./Includes/libft/*.c

// $>ARG="4 67 3 87 23"; ./push_swap $ARG | ./checker_OS $ARG

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
		// system ("leaks push_swap");
		return (1);
	}
	if (stack_a == NULL || stack_b == NULL)
	{
		free_stacks(stack_a, stack_b);
		write(2, "Error\n", 6);
		// system ("leaks push_swap");
		return (1);
	}
    sort(stack_a, stack_b);
	free_stacks(stack_a, stack_b);
	// system ("leaks push_swap");
	return (0);
}
