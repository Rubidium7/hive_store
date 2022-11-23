#include "ft_list.h"
#include <stdio.h>

t_list	*ft_create_elem(void *data);
void	ft_list_push_back(t_list **begin_list, void *data);

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
	l = NULL;
	ft_list_push_back(&l, "hello1");
	print_list(l);
	ft_list_push_back(&l, "hello2");
	print_list(l);
	ft_list_push_back(&l, "hello3");
	print_list(l);
	return (0);
}
