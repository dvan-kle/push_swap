# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: dvan-kle <dvan-kle@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2023/04/20 22:07:37 by dvan-kle      #+#    #+#                  #
#    Updated: 2023/04/20 22:12:20 by dvan-kle      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

LIBFT = libft/libft.a

CC = gcc
CC_FLAGS = -Wall -Wextra -Werror

SRC = src/push_swap.c src/checks.c src/list.c

OBJ = ${SRCS:.c=.o}

all: $(NAME)

$(NAME):
	$(MAKE) all -C libft
	$(CC) $(CC_FLAGS) $(SRC) $(LIBFT) -g -fsanitize=address -o $(NAME)


clean:
	rm -rf $(OBJ)
	$(MAKE) clean -C libft

fclean: clean
	rm -f $(NAME)
	$(MAKE) fclean -C libft

re: fclean all