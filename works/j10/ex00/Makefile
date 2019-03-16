# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkelsie <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/11 14:45:12 by tkelsie           #+#    #+#              #
#    Updated: 2019/03/11 14:57:11 by tkelsie          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SOURCE = ./srcs/
HEADER = ./includes/
FLAGS = -Wall -Wextra -Werror
FILES = $(SOURCE)ft_putchar.c $(SOURCE)ft_putstr.c $(SOURCE)ft_strcmp.c $(SOURCE)ft_strlen.c $(SOURCE)ft_swap.c

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c -I $(HEADER) $(FILES)
	ar rc $(NAME) *o

clean:
	rm -f *.o
	/bin/rm -f *.o

fclean: clean
	rm -f $(NAME)
	/bin/rm -f $(NAME)
	

re: fclean all
