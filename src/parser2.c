/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 02:54:28 by pdrettas          #+#    #+#             */
/*   Updated: 2024/12/28 04:59:31 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/push_swap.h"

void	bubble_sort(int *arr, int n)
{
	int	i;
	int	temp;
	int	swapped;

	if (arr == NULL || n <= 1)
		return ;
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

int	*assigning_index_based_on_number_size(long *array, int *sorted_array,
		int size)
{
	int	*index_array;
	int	i;
	int	j;

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
	return (index_array);
}

int	check_str_digits_size(int argc, char **argv)
{
	int	i;
	int	size;
	int	num_of_str;

	i = 1;
	size = 0;
	while (i < argc)
	{
		num_of_str = split_strings(argv[i]);
		if (num_of_str == 0)
		{
			return (0);
		}
		if (num_of_str == -1)
		{
			return (-1);
		}
		size = size + num_of_str;
		i++;
	}
	return (size);
}

int	check_limits_int(long *array, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (array[i] > INT_MAX || array[i] < INT_MIN)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

t_stack	*parsing(int argc, char **argv, int *size, int duplicate)
{
	long	*array;
	int		*sorted_array;
	int		*index_array;
	t_stack	*stack;

	*size = check_str_digits_size(argc, argv);
	if (*size == 0)
		return (NULL);
	array = build_array_of_numbers(*size, argc, argv);
	if (array == NULL)
		return (NULL);
	if (check_limits_int(array, *size) == 0)
		return (free(array), NULL);
	duplicate = check_for_duplicates(array, *size);
	if (duplicate == 0)
		return (free(array), NULL);
	sorted_array = sort_array(array, *size);
	if (sorted_array == NULL)
		return (free(array), NULL);
	index_array = assigning_index_based_on_number_size(array, sorted_array,
			*size);
	if (index_array == NULL)
		return (free(array), free(sorted_array), NULL);
	stack = set_stack(array, index_array, *size);
	return (free(array), free(sorted_array), free(index_array), stack);
}
