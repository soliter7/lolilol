NAME 	= 	colle-2

OBJ 	= 	main.o \
			read_file.o \
			split.o \
			utils.o \
			identifying.o \
			printing.o \
			string_utils.o

SRC 	= 	sources/main.c \
			sources/read_file.c \
			sources/split.c \
			sources/utils.c \
			sources/identifying.c \
			sources/printing.c \
			sources/string_utils.c

WFLAGS 	= 	-Iincludes -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	cc $(WFLAGS) $(OBJ) -o $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

norme: 
	norminette $(SRC)

main.o: sources/main.c
	cc -c $(WFLAGS) sources/main.c
read_file.o: sources/read_file.c
	cc -c $(WFLAGS) sources/read_file.c
split.o: sources/split.c
	cc -c $(WFLAGS) sources/split.c
utils.o: sources/utils.c
	cc -c $(WFLAGS) sources/utils.c
identifying.o: sources/identifying.c
	cc -c $(WFLAGS) sources/identifying.c
printing.o: sources/printing.c
	cc -c $(WFLAGS) sources/printing.c
string_utils.o: sources/string_utils.c
	cc -c $(WFLAGS) sources/string_utils.c

.PHONY: all re clean fclean
