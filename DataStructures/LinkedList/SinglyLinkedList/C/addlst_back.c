#include "s_linked_lst.h"

void	addlst_back(t_node **curr, void *data)
{
	t_node	*new;

	new = newlst(data);
	if (!*curr)
		*curr = new;
	else
		lastlst(*curr)->next = new;
}
