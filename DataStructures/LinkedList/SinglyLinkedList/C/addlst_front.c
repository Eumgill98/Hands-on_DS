#include "s_linked_lst.h"

void	addlst_front(t_node **head, void *data)
{
	t_node	*new;

	new = newlst(data);
	if (!new)
		return ;
	new->next = *head;
	*head = new;
}
