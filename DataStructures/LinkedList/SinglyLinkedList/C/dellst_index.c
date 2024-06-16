#include "s_linked_lst.h"

void    dellst_index(t_node **head, size_t t_idx)
{
    t_node  *tmp;
    t_node  *prev;
    size_t  idx;

    if (!*(head))
    {
        fprintf(stderr, "IndexError: list index out of range\n");
        return ;
    }
    if  (t_idx == 0)
        dellst_front(head);
    else
    {
        prev = NULL;
        tmp = *head;
        idx = 0;
        while (tmp && idx < t_idx)
        {
            prev = tmp;
            tmp = tmp->next;
            idx++;
        }
        if (!tmp)
        {
            fprintf(stderr, "Indexerror: list index out of range\n");
            return ;
        }
        prev->next = tmp->next;
        tmp->data = NULL;
        tmp->next = NULL;
        free(tmp);
    }
}