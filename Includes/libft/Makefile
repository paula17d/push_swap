# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pauladrettas <pauladrettas@student.42.f    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/12 22:20:14 by pdrettas          #+#    #+#              #
#    Updated: 2024/12/26 20:25:28 by pauladretta      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Werror -Wextra
SRC = ft_strdup.c ft_calloc.c ft_atoi.c ft_isalpha.c ft_isdigit.c \
ft_isprint.c ft_strlcat.c ft_strlen.c ft_strncmp.c ft_tolower.c \
ft_toupper.c ft_isalnum.c ft_isascii.c ft_memset.c ft_bzero.c \
ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strchr.c ft_putstr_fd.c \
ft_strrchr.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_putnbr_fd.c \
ft_substr.c ft_strjoin.c ft_strtrim.c ft_putchar_fd.c ft_putendl_fd.c \
ft_itoa.c ft_striteri.c ft_split.c ft_strmapi.c ft_uitoa.c ft_free_2d.c \
ft_atoi_long.c

OBJ = $(SRC:.c=.o)
NAME = libft.a
HEADER = libft.h

all: $(NAME)

$(NAME): $(OBJ)
		ar rcs $(NAME) $(OBJ)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
