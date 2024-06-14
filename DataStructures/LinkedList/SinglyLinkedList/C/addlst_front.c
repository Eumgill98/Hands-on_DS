#include "s_linked_lst.h"

void	addlst_front(t_node **curr, void *data)
{
	t_node	*new;

	new = newlst(data);
	if (!new)
		return ;
	new->next = *curr;
	*curr = new;
}
