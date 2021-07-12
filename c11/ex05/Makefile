NAME		=	do-op
CC			=	gcc
FLAGS		=	-Wall -Wextra -Werror
INCLD		=	-I includes
SRCS		=	srcs/
MAIN		=	$(SRCS)main.c
OBJECTS		=	$(MAIN) $(SRCS)atoi.c $(SRCS)operations.c $(SRCS)stderr.c $(SRCS)stdout.c $(SRCS)putnbr.c
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

.PHONY	:	all clean fclean
