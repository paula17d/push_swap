# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pauladrettas <pauladrettas@student.42.f    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/12 18:22:30 by pdrettas          #+#    #+#              #
#    Updated: 2024/12/10 15:03:03 by pauladretta      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
SRC =  main.c
OBJ = $(SRC:.c=.o)
LIBFT_DIR = Includes/libft
LIBFT = Includes/libft/libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	$(MAKE) -C $(LIBFT_DIR)            
	@ar rcs $(NAME) $(OBJ) $(LIBFT_DIR)/*.o 
	
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