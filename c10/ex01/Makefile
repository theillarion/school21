NAME		=	ft_cat
CC			=	gcc
FLAGS		=	-Wall -Wextra -Werror
INCLD		=	-I includes
SRCS		=	srcs/
MAIN		=	$(SRCS)main.c
OBJECTS		=	$(MAIN) $(SRCS)ft_strlen.c $(SRCS)ft_putstr.c $(SRCS)ft_stderr.c $(SRCS)ft_stdout.c $(SRCS)ft_file.c
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
