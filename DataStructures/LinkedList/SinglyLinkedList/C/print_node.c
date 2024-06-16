#include "s_linked_lst.h"

static int printValue(void *ptr, char type)
{
    switch (type)
    {
        case 'i':
            return (printf("%d", *((int *)ptr)));
        case 'd':
            return (printf("%f", *((double *)ptr)));
        case 'c':
            return (printf("%c", *((char *)ptr)));
        default:
            return (printf("Unknown type"));
    }
    return (0);
}

int     print_node(t_node *curr, char type)
{
    if (!curr)
        return (printf("NULL"));
    else
        return (printValue(curr->data, type));
}