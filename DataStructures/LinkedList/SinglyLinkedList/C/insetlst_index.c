#include "s_linked_lst.h"

void    insertlst_index(t_node **head, size_t t_idx, void *data)
{
    t_node  *tmp;
    t_node  *new;
    size_t  idx;

    if (!*(head) && t_idx != 0)
        return ;
    if (t_idx == 0)
        addlst_front(head, data);
    else
    {
        new = newlst(data);
        if (!new)
            return ;
        tmp = *head;
        idx = 0;
        while (tmp && idx < t_idx - 1)
        {
            tmp = tmp->next;
            idx++;
        }
        if (tmp == NULL || idx != t_idx - 1)
        {
            fprintf(stderr, "Indexerror: list index out of range\n");
            free(new);
            return ;
        }
        new->next = tmp->next;
        tmp->next = new;
    }
}