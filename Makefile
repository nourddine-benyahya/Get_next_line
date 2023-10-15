SRC = get_next_line.c get_next_line_utils.c

OBJ = $(SRC:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

NAME = get_next_line.a

$(NAME) : $(OBJ)
	ar rc $(NAME) $(OBJ)

all : $(NAME)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all
