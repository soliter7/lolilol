
NAME = libft

SRC = srcs/ft_putchar.c \
	  srcs/ft_putstr.c \
	  srcs/ft_strcmp.c \
	  srcs/ft_strlen.c \
	  srcs/ft_swap.c \

OBJECTS = ft_putchar.o \
		  ft_putstr.o \
		  ft_strcmp.o \
		  ft_strlen.o \
		  ft_swap.o \

all: $(NAME)

$(NAME):
		gcc -Wall -Werror -Wextra -Iincludes -c $(SRC)
		ar rc libft.a $(OBJECTS)

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f libft.a

re: fclean all
