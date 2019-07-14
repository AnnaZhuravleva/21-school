# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkelsie <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/14 18:19:18 by tkelsie           #+#    #+#              #
#    Updated: 2019/03/14 18:19:25 by tkelsie          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
SOURCE = ft_display_file.c
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(SOURCE)
	gcc -o $(NAME) $(SOURCE)

clean:
	/bin/rm -f $(NAME).o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all