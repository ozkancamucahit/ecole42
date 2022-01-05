
CC = gcc
CFLAGS = -Wall -Wextra -Werror -c
AR = ar
AR_FLAGS = rcs
LIBNAME = libft.a
HEADERS = -Iincludes/

C_SOURCES += \
srcs/ft_putchar.c \
srcs/ft_swap.c \
srcs/ft_putstr.c \
srcs/ft_strlen.c \
srcs/ft_strcmp.c

OBJS = ${C_SOURCES:.c=.o}

.c.o:
	${CC} ${CFLAGS} $< -o ${<:.c=.o} ${HEADERS}

${LIBNAME}: ${OBJS}
	${AR} ${AR_FLAGS} ${LIBNAME} ${OBJS}

all:	${LIBNAME}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${LIBNAME}

re:	fclean all

.PHONY:	all clean fclean re .c.o
