#include "s_linked_lst.h"

void    dellst_back(t_node **curr)
{
    t_node  *tmp;

    if (!*curr)
        return ;
    if (*(curr)->next == NULL)
    {
        (*curr)->data = NULL;
        free(*curr);
        *curr = NULL;
    }
    else
    {
        tmp = *curr;
        while (tmp->next->next != NULL)
            tmp = tmp->next;
        tmp->next->data = NULL;
        free(tmp->next);
        tmp->next = NULL;
    }
}