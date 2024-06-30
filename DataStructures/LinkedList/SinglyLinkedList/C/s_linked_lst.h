#ifndef S_LINKED_LST_H
# define S_LINKED_LST_H

#include <stdlib.h>
#include <stdio.h>

typedef struct s_node
{
	void	*data;
	struct s_node	*next;
}	t_node;

t_node	*newlst(void *data);
t_node	*lastlst(t_node *curr);

void	addlst_front(t_node **curr, void *data);
void	addlst_back(t_node **curr, void *data);
void	dellst_front(t_node **curr);
void	dellst_back(t_node **curr);
void	insertlst_index(t_node **head, size_t t_idx, void *data);
void	dellst_index(t_node **head, size_t t_idx);

int			print_node(t_node *curr, char type);
int			print_lst(t_node *head, char type);
int			print_lst_index(t_node *head, size_t s_idx, size_t e_idx, char type);

#endif
