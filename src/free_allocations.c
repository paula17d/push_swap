#include "../Includes/push_swap.h"

void free_stack(t_stack *stack)
{
    t_node *current;

    if (stack->size == 1)
    {
        free(stack->head);
    }
    else 
    {
        current = stack->head->next;

        while (1)
        {
            free(current->prev);
            
            if (current == stack->tail)
            {
                free(stack->tail);
                break;
            }
            current = current->next;
        }
    }
    free(stack);
}
