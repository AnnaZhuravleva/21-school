/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces .c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkelsie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/08 23:41:11 by tkelsie           #+#    #+#             */
/*   Updated: 2019/03/08 23:46:19 by tkelsie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int count(char *str)
{
	int i;
	
	i = 0;
	while (str[i] != '\t' && str[i] != ' ' && str[i] != '\n' && str[i] != '\0')
	{
		i++;
	}
	return(i);
}
char *findw(char *str, int size)
{
	int c;
	char *word;

	c = 0;
	if (str[c] == '\t' && str[c] == ' ' && str[c] == '\n' && str[c] == '\0')
		str++;
	word = (char*)malloc(sizeof(*word) * (size + 1));
	if (str[c] != '\t' && str[c] != ' ' && str[c] != '\n' && str[c] != '\0')
	{
		while (str[c] != '\t' && str[c] != ' ' && str[c] != '\n' && str[c] != '\0')
		{
			word[c] = str[c];
			c++;
		}
		word[c] = '\0';
		return(word);
	}
	else
		return(0);
}
int	len(char *str)
{
	int s;
	int i;
	
	i = 0;
	s = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\t' | str[i] == ' ' | str[i] == '\n' | str[i] == '\0')
		{
			if (str[i + 1] != '\t' && str[i + 1] != ' ' && str[i + 1] != '\n' && str[i + 1] != '\0')
				s++;
		}
	i++;
	}
	return (s);
}
char	 *ft_split_whitespaces(char *str)
{
	
	char **word;
	int k;
	int s;
	
	k = 0;
	s = len(str);
	word = (char**)malloc(sizeof(**word) * (s + 2));
	while (k <= s)
	{
		size = count(str);
		if (findw(str, size) != NULL)
		{
			word[k] = findw(str, size);
			printf("%s", word[k]);
			while (size >= 0)
			{
				str++;
				size--;
			}
			k++;
		}
		else
			str++;
	}
	word[k] = "0";
	return(*word);   
}
