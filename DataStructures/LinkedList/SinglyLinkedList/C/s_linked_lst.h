#ifndef S_LINKED_LST_H
# define S_LINKED_LST_H

#include <stdlib.h>

typedef struct s_node
{
	void	*data;
	s_node	*next;
}	t_node;

t_node	*newlst(void *data);
t_node	*lastlst(t_node *curr);

void	addlst_front(t_node **curr, void *data);
void	addlst_back(t_node **curr, void *data);

#endif
