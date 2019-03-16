#include <unistd.h>
#include "ft_list.h"

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
