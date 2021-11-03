# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/03 15:10:13 by acroisie          #+#    #+#              #
#    Updated: 2021/11/03 15:56:00 by acroisie         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc -Wall -Wextra -Werror

SRCS := $(wildcard *.c)

OBJS := $(SRCS:.c=*.o)

all : $(NAME)

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)
	ranlib $(NAME)

%.o : %.c libft.h
	$(CC) -c $< -o $@
	
clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all, clean, fclean