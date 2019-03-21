/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnesoi <bnesoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/17 15:00:13 by bnesoi            #+#    #+#             */
/*   Updated: 2019/03/17 22:39:28 by bnesoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <stdlib.h>
# include "ft_list.h"

void	ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_atoi(char *str);
void	ft_putnbr(int nb);
int		ft_strcmp(char *s1, char *s2);
void	put_line(int count, char start_end[3], char middle, char *dest);
void	put_3char(char *dest, char *source, int a);
void	put_rush(int x, int y, char shema[7], char *dest);
int		get_dim_x(char *str);
int		get_dim_y(char *str);
int		is_rush(char *str);
char	*ft_read_stdin(void);
void	display_rush(int x, int y, char shema[7]);

#endif
