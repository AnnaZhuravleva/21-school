NAME=colle-2
SRC=./ft_atoi.c ./ft_put.c ./ft_list_clear.c ./ft_list_push_front.c ./ft_list_size.c ./ft_create_elem.c ./ft_read_stdin.c ./ft_get_dim.c ./ft_is_rush.c ./ft_strcmp.c ./ft_new_rush.c ./ft_list_push_back.c ./ft_display_rush.c ./ft_list_reverse.c
OBJ=./ft_atoi.o ./ft_put.o ./ft_list_clear.o ./ft_list_push_front.o ./ft_list_size.o ./ft_create_elem.o ./ft_read_stdin.o ./ft_get_dim.o ./ft_is_rush.o ./ft_strcmp.o ./ft_new_rush.o ./ft_list_push_back.o ./ft_display_rush.o ./ft_list_reverse.o
GCC=gcc -Wall -Wextra -Werror

all : $(NAME)

$(NAME) :
	@$(GCC) -c ./main.c $(SRC)
	@$(GCC) ./main.o $(OBJ) -o $(NAME)

clean :
	@/bin/rm -f ./main.o ./main00.o ./main01.o ./main02.o ./main03.o ./main04.o $(OBJ)

fclean : clean
	@/bin/rm -f $(NAME) colle-00 colle-01 colle-02 colle-03 colle-04

re : fclean all

colle-00 :
	@$(GCC) -c ./main00.c $(SRC)
	@$(GCC) ./main00.o $(OBJ) -o colle-00

colle-01 :
	@$(GCC) -c ./main01.c $(SRC)
	@$(GCC) ./main01.o $(OBJ) -o colle-01

colle-02 :
	@$(GCC) -c ./main02.c $(SRC)
	@$(GCC) ./main02.o $(OBJ) -o colle-02

colle-03 :
	@$(GCC) -c ./main03.c $(SRC)
	@$(GCC) ./main03.o $(OBJ) -o colle-03

colle-04 :
	@$(GCC) -c ./main04.c $(SRC)
	@$(GCC) ./main04.o $(OBJ) -o colle-04
