/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_2d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauladrettas <pauladrettas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 17:10:40 by pauladretta       #+#    #+#             */
/*   Updated: 2024/12/10 18:22:37 by pauladretta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_free_2d(char **matrix)
{
    int i;

    if (matrix == NULL)
    {
        return ;
    }
    
    i = 0;
    while (matrix != NULL && matrix[i] != NULL)
    {
        free(matrix[i]);
        i++;
    }
    
    if (matrix != NULL)
    {
        free(matrix);
    }
}
