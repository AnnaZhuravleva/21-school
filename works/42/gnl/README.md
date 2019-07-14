https://opensource.apple.com/source/cvs/cvs-29/cvs/lib/getline.c.auto.html

gcc -Wall -Wextra -Werror get_next_line.c main.c get_next_line.h libft/libft.a

gcc -Wall -Wextra -Werror gnl.c main.c get_next_line.h libft/libft.a



#include "get_next_line.h"

static t_chars	*list = NULL;
int		name = 0;
//char		*rest = NULL;

t_chars	*ft_chrsnew(void const *content, size_t content_size, int nb)
{
	t_chars	*l;

	if (!(l = (t_chars *)malloc(sizeof(t_chars) * content_size)))
		return (NULL);
	if (content == NULL)
		l->content = NULL;
	else
	{
		if (!(l->content = (void *)malloc(content_size)))
			return (NULL);
		ft_memcpy(l->content, content, content_size);
	}
	l->content_size = (content) ? content_size : 0;
	l->number = (nb) ? nb : 0;
	l->next = NULL;
	return (l);
}

void	ft_one_line(const int fd, char ***line, char **rest)
{
	char buff[BUFF_SIZE];
	char *text;
	char *tmp;

	tmp = ft_strnew(1);
	read(fd, &buff, BUFF_SIZE);
	text = ft_strjoin(ft_strnew(1), buff);
	*rest = ft_memchr(text, 0x0A, BUFF_SIZE);
	ft_memccpy(tmp, text, 0x0A, BUFF_SIZE);
	**line = tmp;
	return ;
}

int		get_next_line(const int fd, char **line)
{
	char *reste;

	if (!fd || !line)
		return (-1);
	//if (list == NULL)
	//	list = ft_chrsnew(NULL, 0, 0);
	if (fd == name)
	{
	//	reste = ft_strnew(1);
	 	//ft_memccpy(reste, rest, 0x0A, BUFF_SIZE);
		printf("%s", list->content);
		//*line = reste;
		return (0);
	}
	*line = NULL;
	ft_one_line(fd, &line, &reste);
	name = fd;
	//rest = reste;
	list = ft_chrsnew(reste, ft_strlen(reste), fd);
	//printf("%s\n %zu %d\n\n\n", list->content, list->content_size, list->number);
	return (1);
}
--------------


static t_chars	*ft_chrsnew(void const *content, size_t content_size, int nb)
{
	t_chars	*l;

	if (!(l = (t_chars *)malloc(sizeof(t_chars) * content_size)))
		return (NULL);
	if (content == NULL)
		l->content = NULL;
	else
	{
		if (!(l->content = (void *)malloc(content_size)))
			return (NULL);
		ft_memcpy(l->content, content, content_size);
	}
	l->content_size = (content) ? content_size : 0;
	l->number = nb;
	l->next = NULL;
	return (l);
}

void			ft_one_line(const int fd, char **res, char **rest)
{
	char buff[BUFF_SIZE];
	char *text;
	char *tmp;

	tmp = ft_strnew(1);
	read(fd, &buff, BUFF_SIZE);
	text = ft_strjoin(ft_strnew(1), buff);
	*rest = ft_memchr(text, 0x0A, BUFF_SIZE);
	ft_memccpy(tmp, text, 0x0A, BUFF_SIZE) ||
	ft_memccpy(tmp, text, -1, BUFF_SIZE);
	tmp[ft_strlen(tmp) - 1] = '\0';
	*res = tmp;
	return ;
}

int				get_next_line(const int fd, char **line)
{
	char buff[BUFF_SIZE];
	char	*rest;
	char	*tmp;
	int		i;
	char	*t;

	i = 0;
	t = NULL;
	if (!fd || !line)
		return (-1);
	if (list && list->number == fd)
	{
		rest = list->content;
		tmp = ft_strnew(BUFF_SIZE);
		while (rest[i] != '\n' && rest[i] != 0)
			i++;
		if (rest[i] == '\n')
		{
			ft_memccpy(tmp, rest, 0x0A, BUFF_SIZE);
			tmp[i] = '\0';
			rest = ft_memchr(rest, '\n', ft_strlen(rest));
		}
		else
		{
			t = rest;
			read(fd, &buff, BUFF_SIZE);
			rest = buff;
			ft_memccpy(tmp, rest, 0x0A, BUFF_SIZE);
			rest = ft_memchr(buff, 0x0A, BUFF_SIZE);
			tmp = ft_strjoin(t, tmp);
			printf("\n=====================\n|\n%s\n\n%s\n|\n=============\n\n", t, tmp);
		}
		*line = tmp;
		rest++;
		list->content = rest;
		return (0);
	}
	*line = NULL;
	ft_one_line(fd, &tmp, &rest);
	*line = tmp;
	rest++;
	list = ft_chrsnew(rest, ft_strlen(rest), fd);
	return (1);
}
