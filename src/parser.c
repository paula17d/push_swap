/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 15:30:11 by pauladretta       #+#    #+#             */
/*   Updated: 2024/12/28 04:49:49 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/push_swap.h"

int	is_str_number(char *str)
{
	int	i;

	if (str == NULL)
		return (0);
	i = 0;
	if (str != NULL && str[i] != '\0' && str[i + 1] != '\0' && str[i] == '-')
	{
		i++;
	}
	while (str != NULL && str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	split_strings(char *str)
{
	int		i;
	int		num_of_str;
	char	**splitted_string;

	splitted_string = ft_split(str, ' ');
	i = 0;
	num_of_str = 0;
	while (splitted_string[i] != NULL)
	{
		if (is_str_number(splitted_string[i]) == 0)
		{
			ft_free_2d(splitted_string);
			return (-1);
		}
		i++;
	}
	num_of_str = i;
	ft_free_2d(splitted_string);
	return (num_of_str);
}

long	*build_array_of_numbers(int size, int argc, char **argv)
{
	long	*num;
	int		i;
	int		j;
	int		k;
	char	**splitted_string;

	num = malloc(size * sizeof(long));
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
			num[k] = ft_atoi_long(splitted_string[i]);
			k++;
			i++;
		}
		ft_free_2d(splitted_string);
		j++;
	}
	return (num);
}

int	check_for_duplicates(long *array, int size)
{
	int	i;
	int	j;

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

// t_stack *set_stack(int *array, int *index_array, int size)
// {
//     int i;
//     t_stack *stack;
//     t_node *current;

//     current = malloc(1 *sizeof(t_node));
//     if (current == NULL)
//         return (NULL);
//     stack = malloc(1 *sizeof(t_stack));
//     if (stack == NULL)
//         return (free(current), NULL);
//     stack->head = current;
//     stack->size = 0;
//     i = 0;
//     while (i < size)
//     {
//         current->value = array[i];
//         current->index = index_array[i];
//         if (i == size - 1)
//             current->next = NULL;
//         else
//         {
//             current->next = malloc (1 *sizeof(t_node));
	// TODO: free function for all nodes
//             current = current->next;
//         }
//         i++;
//         (stack->size)++;
//     }
//     stack->tail = current;

//     return (stack);
// }

int	*sort_array(long *array, int size)
{
	int	*sorted_array;
	int	i;

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
