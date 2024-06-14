#include "s_linked_lst.h"

t_node	*lastlst(t_node *curr)
{
	if (!curr)
		return (NULL);
	while (curr->next)
		curr = curr->next;
	return (curr);
}
