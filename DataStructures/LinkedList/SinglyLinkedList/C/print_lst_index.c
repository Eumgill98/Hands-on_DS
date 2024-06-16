#include "s_linked_lst.h"

static int  solo_print(t_node *head, size_t t_idx, char type)
{
    size_t  idx;

    if (!head)
        return (printf("NULL"));
    idx = 0;
    while (head && idx < t_idx)
    {
        head = head->next;
        idx++;
    }
    if (head == NULL || idx != t_idx)
        return (fprintf(stderr, "IndexError: list index out of range\n"));
    return (print_node(head, type));
}

static int  multi_print(t_node  *head, size_t s_idx, size_t e_idx, char type)
{
    size_t  idx;
    size_t  total_len;

    if (!head)
        return (printf("NULL"));
    idx = 0;
    while (head && idx < s_idx)
    {
        head = head->next;
        idx++;
    }
    if (head == NULL || idx != s_idx)
        return (fprintf(stderr, "IndexError: list index out of range\n"));
    total_len = printf("[");
    while (head && idx < e_idx)
    {
        total_len += print_node(head, type);
        if (head->next != NULL || idx < e_idx)
            total_len += printf(", ");
        head = head->next;
        idx++;
    }
    total_len += printf("]");
    return (total_len);
}

int     print_lst_index(t_node *head, size_t s_idx, size_t e_idx, char type)
{
    if (!head)
        return (printf("NULL"));
    else
    {
        if (s_idx >= e_idx)
            return (fprintf(stderr, "Index error : Wrong range of index\n"));
        if (e_idx - s_idx == 1)
            return (solo_print(head, s_idx, type));
        else
            return (multi_print(head, s_idx, e_idx, type));
    }
}