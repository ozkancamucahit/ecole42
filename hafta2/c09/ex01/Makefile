
CC = cc
CFLAGS = -c -Wall -Wextra -Werror
AR = ar
AR_FLAGS = rc
LIBNAME = libft.a
HEADERS = -Iincludes/

C_SOURCES += \
srcs/ft_putchar.c \
srcs/ft_swap.c \
srcs/ft_putstr.c \
srcs/ft_strlen.c \
srcs/ft_strcmp.c

OBJS = ${C_SOURCES:.c=.o}

all:	${OBJS}
	${AR} ${AR_FLAGS} ${LIBNAME} ${OBJS}

${OBJS}: ${C_SOURCES}
	${CC} ${CFLAGS} ${HEADERS} $< -o $@

libft.a:	all

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${LIBNAME}

re:	fclean all

.PHONY:	all clean fclean re
