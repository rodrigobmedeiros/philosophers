NAME = philo

SRCS = \
	philo.c

CC = gcc
FLAGS = -Wall -Wextra -Werror

OBJS = ${SRCS:.c=.o}

all: $(NAME)

$(NAME): ${OBJS}
	${CC} ${OBJS} -o ${NAME}

%.o: %.c
	cc ${FLAGS} -c -o $@ $<

clean:
	rm -f ${OBJS} ${OBJSB}

fclean: clean
	rm -f ${NAME}

re: clean fclean all
