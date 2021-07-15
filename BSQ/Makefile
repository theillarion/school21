COMMON_SRCS	=	${wildcard srcs/*.c}
COMMON_HDRS	=	includes/bsq.h
SRCS		=	main.c ${COMMON_SRCS}
OBJS		=	${SRCS:.c=.o}
TSTS		=	main_tests.c ${COMMON_SRCS}
TSTS_OBJS	=	${TSTS:.c=.o}
INCLUDES	=	-I includes
NAME		=	bsq
GCC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror
RM 			=	rm -f

.c.o	:	${COMMON_HDRS}
		@${GCC} ${CFLAGS} ${INCLUDES} -c $< -o ${<:.c=.o}

all		:	${NAME}

${NAME}	:	${OBJS} ${COMMON_HDRS}
		@${GCC} ${CFLAGS} ${INCLUDES} ${OBJS} -o ${NAME}

clean	:
		@${RM} ${OBJS}

fclean	:	clean
		@${RM} ${NAME}

tst		:	clean ${TSTS_OBJS} ${COMMON_HDRS}
		@${GCC} ${CFLAGS} ${INCLUDES} ${TSTS_OBJS} -o test

re		:	fclean ${NAME}

.PHONY: all clean fclean tst re
