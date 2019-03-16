
#include "ft_list.h"
#include <unistd.h>
#include <stdlib.h>

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
	t_list *tmp;
	int nb;

	tmp = begin_list;
	nb = 0;
	if (tmp == 0)
		return (0);
	while (tmp->next != 0)
	{
		nb++;
		tmp = tmp->next;
	}
	return (nb);
}
t_list	*ft_list_last(t_list *begin_list)
{
    t_list *tmp;

    tmp = begin_list;
    if (tmp)
    {
        while (tmp->next)
        {
            tmp = tmp->next;
        }
        return (tmp);
    }
    return (tmp);
}
t_list			*ft_list_push_params(int ac, char **av)
{
	t_list		*list;
	t_list		*tmp;
	int			i;

	i = 1;
	tmp = 0;
	while (i < ac)
	{
		list = ft_create_elem(av[i]);
		list->next = tmp;
		tmp = list;
		i++;
	}
	return (list);
}
void	ft_list_clear(t_list **begin_list)
{
	t_list *tmp;
	t_list *list;

	tmp = *begin_list;
	while (tmp)
	{
		if (tmp->next)
		{
			list = tmp->next;
		}
		else
		{
			tmp->next = 0;
		}
		free (list);
		list = tmp;
	}
}