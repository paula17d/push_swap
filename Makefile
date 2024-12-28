# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/12 18:22:30 by pdrettas          #+#    #+#              #
#    Updated: 2024/12/28 03:35:16 by pdrettas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
SRC =  main.c  src/parser.c src/doubly_linked_list.c src/radix_sort.c src/utils.c src/instructions/push.c \
		src/instructions/reverse_rotate.c src/instructions/rotate.c src/instructions/swap.c src/instructions/sort.c \
		src/parser2.c src/parser3.c src/free_allocations.c
OBJ = $(SRC:.c=.o)
LIBFT_DIR = Includes/libft
LIBFT = Includes/libft/libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	$(MAKE) -C $(LIBFT_DIR)            
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(LIBFT)

	
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
	
clean:
	rm -f $(OBJ)
	rm -f $(LIBFT_DIR)/*.o
	
fclean: clean
	rm -f $(NAME)
	rm -f $(LIBFT_DIR)/*.a
	
re: fclean all

.PHONY: all fclean clean re 