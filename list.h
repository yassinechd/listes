#ifndef LIST_H
# define LIST_H

#include <stdlib.h>
#include <stdio.h>

typedef struct t_elem
{
	int 				value;
	struct t_elem		*next;
}				t_elem;

typedef struct t_list
{
	t_elem *head;
}				t_list;

# endif