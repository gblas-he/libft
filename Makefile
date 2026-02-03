# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/02 16:03:25 by gblas-he          #+#    #+#              #
#    Updated: 2026/02/03 17:35:56 by gblas-he         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
	

SRCS = ft_bzero.c ft_calloc.c ft_isalnum.c ft_itoa.c ft_lstadd_front.c \
ft_lstclear.c ft_lstiter.c ft_lstmap.c ft_lstnew.c ft_lstsize.c ft_memchr.c \
ft_putnbr_fd.c ft_memcpy.c ft_memset.c ft_putendl_fd.c ft_memcmp.c \
ft_memmove.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c \
ft_strlen.c ft_tolower.c ft_atoi.c ft_isprint.c ft_lstadd_back.c ft_lstdelone.c \
ft_putstr_fd.c ft_strlcat.c ft_strlcpy.c ft_strmapi.c ft_strncmp.c ft_strnstr.c \
ft_strrchr.c ft_strtrim.c ft_substr.c ft_toupper.c ft_isalpha.c ft_isascii.c \
ft_isdigit.c ft_putchar_fd.c ft_lstlast.c
OBJS = $(SRCS:.c=.o)
INCLUDE = libft.h
	
AR = ar rcs
RM = rm -f

.PHONY: all clean fclean re
bonus: all

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
	

