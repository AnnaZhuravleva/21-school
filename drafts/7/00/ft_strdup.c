/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkelsie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/07 12:52:37 by tkelsie           #+#    #+#             */
/*   Updated: 2019/03/07 12:53:18 by tkelsie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
char	*ft_strcpy(char *dest, char *src);
void	ft_putstr(char *str);

char	*ft_strdup(char *src)
{
	char	*dest;
	int		len;

	len = 0;
	while (src[len])
		len++;
	dest = (char*)malloc(sizeof(*dest) * (len + 1));
	ft_strcpy(dest, src);
	free(dest);
	ft_putstr(dest);
	return (0);
}