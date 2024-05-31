# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iarefeva <iarefeva@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/26 18:26:56 by iarefeva          #+#    #+#              #
#    Updated: 2024/05/29 13:30:50 by iarefeva         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRCS = $(wildcard *.c)
OBJS = $(patsubst %.c, %.o, $(SRCS))

all :	$(NAME)
	
$(NAME) :
	@$(CC) $(CFLAGS) -c $(SRCS) -I./
	@ar -rcs $(NAME) $(OBJS)

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -f $(OBJS)

fclean :	clean
	rm -f $(NAME)

re :	fclean	all

.PHONY: all clean fclean re
