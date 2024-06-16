#include "s_linked_lst.h"

t_node	*newlst(void *data)
{
	t_node	*new;

	new = (t_node *)malloc(sizeof(t_node));
	if (!new)
	{
		fprintf(stderr, "MemoryError: Unable to allocate X bytes\n");
		return (NULL);
	}
	new->next = NULL;
	new->data = data;
	return (new);
}
