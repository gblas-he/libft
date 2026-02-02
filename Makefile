# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/02 16:03:25 by gblas-he          #+#    #+#              #
#    Updated: 2026/02/02 17:30:57 by gblas-he         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
	

SRCS = $(wildcard ft_*.c)
OBJS = $(SRCS:.c=.o)
INCLUDE = libft.h
	
AR = ar rcs
RM = rm -f

.PHONY: all clean fclean re
	

all: $(NAME)
	

$(NAME): $(OBJS)
	$(AR) $@ $^

%.o: %.c $(INCLUDE)
	$(CC) $(CFLAGS) -c -o $@ $<
	

clean:
	$(RM) $(OBJS)
	

fclean: clean
	$(RM) $(NAME)
	

re: fclean all
	

