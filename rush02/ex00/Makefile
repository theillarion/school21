NAME		=	rush-02
CC			=	gcc
FLAGS		=	-Wall -Wextra -Werror
INCLD		=	-I includes
SRCS		=	srcs/
MAIN		=	$(SRCS)main.c
OBJECTS		=	$(MAIN) $(SRCS)file.c $(SRCS)memory.c $(SRCS)output_streams.c $(SRCS)map.c $(SRCS)array.c $(SRCS)strings.c $(SRCS)build.c $(SRCS)atoi.c $(SRCS)strings2.c $(SRCS)algoritm.c
DEPN		=	$(OBJECTS:.c=.o)
RM			=	rm -f

.c.o	:
			@$(CC) $(FLAGS) $(INCLD) -c $< -o $(<:.c=.o)

all		:	$(NAME)

$(NAME)	:	$(DEPN)
			@$(CC) $(FLAGS) $(INCLD) $(DEPN)	-o $(NAME)

clean	:
			@$(RM) $(DEPN)

fclean	:	clean
			@$(RM) $(NAME)
re		:	fclean all

.PHONY	:	all clean fclean re

#OBJECTS		=	$(MAIN) $(SRCS)file.c $(SRCS)memory.c $(SRCS)output_streams.c $(SRCS)map.c $(SRCS)array.c $(SRCS)strings.c
