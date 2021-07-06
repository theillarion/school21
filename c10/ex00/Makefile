CC			=	gcc
NAME		=	ft_display_file
PATH_OBJECTS=	srcs/
PATH_INCL	=	-I includes
FLAGS		=	-Wall -Wextra -Werror
MAIN		= 	$(PATH_OBJECTS)main.c
OBJECTS		=	$(MAIN) $(PATH_OBJECTS)ft_putstr.c $(PATH_OBJECTS)ft_strlen.c
LIB			=	$(PATH_INCL)ft.h
DEP			=	$(OBJECTS:.c=.o)
RM			=	rm -f

.c.o		:
			@$(CC) $(FLAGS) $(PATH_INCL) -c $< -o $(<:.c=.o)

all		:	$(NAME)

$(NAME)	:	$(DEP)
			@$(CC) $(FLAGS) $(PATH_INCL) $(DEP) -o $(NAME)
clean	:
			@$(RM) $(DEP)

fclean	:	clean
			@$(RM) $(NAME)

.PHONY	:	all clean fclean
