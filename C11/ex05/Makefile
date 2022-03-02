# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cde-la-c <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/05 13:16:31 by cde-la-c          #+#    #+#              #
#    Updated: 2022/02/05 14:35:50 by cde-la-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= do_op.c helpers.c
OBJS		= $(SRCS:.c=.o)
NAME	= do-op
CC		= gcc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}

all:	$(NAME)

clean: 
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)