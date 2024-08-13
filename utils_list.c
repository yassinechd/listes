#include "list.h"



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

	new = malloc(sizeof(t_elem));
	if (!new)
		return ;
	new->value = value;
	new->next = list->head;
	list->head = new;
}

/*afficher le contenu de la liste*/

void aff_list(t_list *list)
{
	if (list == NULL)
		return ;
	t_elem *noeud;
	
	noeud = list->head;

	while (noeud != NULL)
	{
		printf("%p = %d -> %p\n", noeud, noeud->value, noeud->next);
		noeud = noeud->next;
	}
	printf("NULL\n");
}

/*main pour tester ma liste*/

int main()
{
	t_list *list = ft_initialisaion(5);

	add_elem(list, 6);
	add_elem(list, 7);
	add_elem(list, 8);
	add_elem(list, 9);
	add_elem(list, 10);

	aff_list(list);
}
