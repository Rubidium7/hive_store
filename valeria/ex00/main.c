#include "ft_list.h"
#include <stdio.h>

t_list	*ft_create_elem(void *data);

void print_list(t_list *list)
{
	while (list)
	{
		printf("%s -> ", list->data);
		list = list->next;
	}
	printf("\n");
}

int main(void)
{
	t_list *l;

	l = ft_create_elem("hello");
	print_list(l);
	return (0);
}
