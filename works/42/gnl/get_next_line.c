/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkelsie <tkelsie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 16:02:30 by tkelsie           #+#    #+#             */
/*   Updated: 2019/05/02 23:09:44 by tkelsie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	**ft_split(char *content, size_t len)
{
	char	**split;
	char	*tmp;
	int		i;
	int		k;

	i = 0;
	k = 0;
	tmp = (char *)content;
	split = (char **)malloc(sizeof(split) * 2);
	printf("___TO_SPLIT___: %s\n", tmp);
/*	if (ft_memchr(tmp, '\n', len) == NULL)
	{
		split[0] = tmp;
		split[1] = NULL;
		printf("___SPLITTED_2__: %s\n", split[0]);
		printf("___MEMCHR__: %s\n", ft_memchr(tmp, '\n', len));
		return (split);
	}*/
	while (tmp[i] && (tmp[i] != '\n' && tmp[i] != '\0'))
		i++;
	split[0] = ft_strnew(i);
	split[0] = ft_strncpy(split[0], tmp, i);
	split[0][i] = '\0';
	split[1] = ft_strnew(len - i);
	i++;
	while (tmp[i] != '\0' && tmp[i])
		split[1][k++] = tmp[i++];
	split[1][k] = '\0';
	printf("___SPLITTED___: %s\n", split[0]);
	return (split);
}

char	**get_one_line(const int fd, char *content)
{
	char	buff[BUFF_SIZE + 1];
	int		y;
	int		len;
	char	*tmp;

	buff[BUFF_SIZE] = '\0';
	len = ft_strlen(content);
	if (content && ((ft_memchr(content, '\n', len) != NULL)))
		return (ft_split(content, len));
	else
	{
		y = read(fd, &buff, BUFF_SIZE);
		if (y == 0 && content == NULL)
			return (NULL);
		printf("___LINE___: %s\n", content);
		if ((ft_memchr(content, '\n', len) != NULL) && y == 0)
		{
			printf("LINE: %s\n", content);
			return (ft_split(content, len));
		}
		buff[y] = '\0';
		tmp = ft_strjoin(content, buff);
		
		
		if (y < BUFF_SIZE)
		{
			printf("___LINE_3___: %s\n", tmp);
			return (ft_split(tmp, BUFF_SIZE));
			
		}
		ft_strdel(&content);

		return (get_one_line(fd, tmp));
	}
}

int		get_next_line(const int fd, char **line)
{
	static t_list	*list;
	char			**split;
	int				check;

	split = NULL;
	if (!fd || !line)
		return (-1);
	if (!(list))
		list = ft_lstnew(ft_strnew(0), (size_t)fd);
	if (fd == (int)list->content_size)
	{
		if (list->content == NULL)
			return (0);
		split = get_one_line(fd, list->content);
	}
	*line = (split != NULL) ? split[0] : NULL;
	list->content = (split != NULL) ? split[1] : NULL;
	check = (split != NULL) ? 1 : 0;
	return (check);
}
