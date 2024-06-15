#include "s_linked_lst.h"

void    dellst_front(t_node **curr)
{
    t_node *new_first;

    if (!*(curr))
        return ;
    new_first = *(curr)->next
    *(curr)->data = NULL;
    *(curr)->next = NULL;
    free(*curr);
    *curr = new_first;
}