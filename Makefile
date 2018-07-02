CC	=	gcc
CFLAGS	+=	-Wall -Wextra -Wpedantic -Werror
CFLAGS	+=	-I ./inc
CFLAGS	+=	-fPIC

SRC	=	src/my_getnbr.c \
		src/my_isalnum.c \
		src/my_lowcase.c \
		src/my_putchar.c \
		src/my_putnbr.c \
		src/my_putstr.c \
		src/my_sort_str_tab.c \
		src/my_strcat.c \
		src/my_strcmp.c \
		src/my_strcpy.c \
		src/my_strdup.c \
		src/my_strlen.c \
		src/my_trim.c

OBJ	= 	$(SRC:.c=.o)

NAME	= 	libmy
NAME_STC= 	$(NAME).a
NAME_DYN= 	$(NAME).so

RM	= 	rm -f

all:		$(NAME_STC) $(NAME_DYN)

$(NAME_STC): 	$(OBJ)
	ar rc $(NAME_STC) $(OBJ)
	ranlib $(NAME_STC)

$(NAME_DYN): 	$(OBJ)
	$(CC) -shared $(OBJ) $(CPPFLAGS) -o $(NAME_DYN)

clean:
	$(RM) $(OBJ)

fclean: 	clean
	$(RM) $(NAME_STC) $(NAME_DYN)

re:		fclean all

.PHONY	= 	all $(NAME_STC) $(NAME_DYN) clean fclean re
