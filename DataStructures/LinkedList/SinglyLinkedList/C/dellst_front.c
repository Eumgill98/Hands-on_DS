#include "s_linked_lst.h"

void    dellst_front(t_node **head)
{
    t_node *new_first;

    if (!*(head))
        return ;
    new_first = *(head)->next
    *(head)->data = NULL;
    *(head)->next = NULL;
    free(*head);
    *head = new_first;
}