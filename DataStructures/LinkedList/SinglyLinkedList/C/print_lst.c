#include "s_linked_lst.h"

int     print_lst(t_node *head, char type)
{
    size_t  total_len;

    if (!head)
        return (printf("NULL"));
    else
    {
        total_len = printf("[");
        while (head)
        {
            total_len += print_node(head, type);
            if (head->next != NULL)
                total_len += printf(", ");
            head = head->next;
        }
        total_len += printf("]");
        return (total_len);
    }
}