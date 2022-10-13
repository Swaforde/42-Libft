# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbouvera <tbouvera@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/11 12:49:26 by tbouvera          #+#    #+#              #
#    Updated: 2022/10/13 13:31:03 by tbouvera         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = ft_isalnum.c ft_strlcat.c ft_strlcpy.c ft_memcmp.c \
ft_isdigit.c ft_memcpy.c  ft_strlen.c  ft_tolower.c ft_bzero.c \
ft_isalpha.c ft_isprint.c ft_memset.c  ft_strncmp.c ft_toupper.c \
ft_isascii.c ft_memchr.c ft_strchr.c  ft_strrchr.c ft_memmove.c \
ft_strdup.c ft_calloc.c ft_atoi.c ft_substr.c ft_strjoin.c ft_strtrim.c

OBJS = ${SRCS:.c=.o}
INCLUDE = ../libft.h
CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra

.c.o :
	${CC} ${CFLAGS} -I ${INCLUDE} -c $< -o $(<:.c=.o)

all : ${NAME}

${NAME} : ${OBJS}
	ar rc ${NAME} ${OBJS}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

