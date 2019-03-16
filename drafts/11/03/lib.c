
#include <stdlib.h>
#include <unistd.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list *tmp;

	tmp = malloc(sizeof(t_list));
	if (tmp)
	{
		tmp->data = data;
		tmp->next = NULL;
	}
	return (tmp);
}
void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (*str)
	{
		write(1, &*str, 1);
		str++;
	}
}
void	print_list(t_list *list)
{
	while (list)
	{
		ft_putstr(list->data);
		list = list->next;
	}
}
void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *list;
	t_list *tmp;

	tmp = *begin_list;
	list = ft_create_elem(data);
	if (list)
	{
		while (tmp->next != 0)
		{
			tmp = tmp->next;
		}
		tmp->next = list;
	}
}
void	ft_list_push_phront(t_list **begin_list, void *data)
{
	t_list *list;
	t_list *tmp;

	tmp = *begin_list;
	list = ft_create_elem(data);
	if (list)
	{
		list->next = tmp;
		*begin_list = list;
	}
}
int	ft_list_size(t_list *begin_list)
{
	int nb;

	nb = 0;
	while (begin_list->next)
	{
		nb++;
	}
	return (nb);
}
