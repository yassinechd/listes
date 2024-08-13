#ifndef LISTE_H
# define LISTE_H

typedef struct t_elem
{
	int 				value;
	struct t_stack		*next;
}				t_elem;

typedef struct t_list
{
	t_elem *head;
}				t_list;


# endif