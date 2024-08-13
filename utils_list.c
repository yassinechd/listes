#include "liste.h"

/*initialiser la liste*/
/**/
t_list *ft_initialisaion(int value)
{
	t_list *list;
	t_elem *elem;

	list = malloc(sizeof(t_list));
	elem = malloc(sizeof(t_elem));

	if (!elem || !list)
		return(NULL);
	elem->value = value;
	elem->next = NULL;
	list->head = elem;
	return (list);
}

/*ajouter un élément*/

void add_elem(t_list *list, int value)
{
	t_elem *new;

	new = malloc(sizeof(*t_elem));
	if (!new)
		return (NULL);
	new->value = value;
	new->next = list->head;
	list->head = new;
}



/*supprimer un élément*/
/*afficher le contenu de la liste*/
/*supprimer la liste entière*/