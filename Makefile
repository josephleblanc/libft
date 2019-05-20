NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror -I.

SRC = $(wildcard *.c)

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ) 

$(OBJ): $(SRC)
	$(CC) -c $(CFLAGS) $(SRC)

clean:
	rm -f *.o

fclean: clean
	rm -f libft.a

re: fclean all
