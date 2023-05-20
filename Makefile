# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: dvan-kle <dvan-kle@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2023/04/20 22:07:37 by dvan-kle      #+#    #+#                  #
#    Updated: 2023/05/20 20:28:08 by danielvankl   ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

LIBFT = libft/libft.a

CC = gcc
CC_FLAGS = -Wall -Wextra -Werror

SRC = src/push_swap.c src/checks.c src/list.c src/swap.c src/push.c src/rotate.c src/reverse_rotate.c src/simple_sort.c src/radix.c

OBJ = ${SRCS:.c=.o}

all: $(NAME)

$(NAME):
	$(MAKE) all -C libft
	$(CC) -g $(CC_FLAGS) $(SRC) $(LIBFT) -o $(NAME)


clean:
	rm -rf $(OBJ)
	$(MAKE) clean -C libft

fclean: clean
	rm -f $(NAME)
	$(MAKE) fclean -C libft

re: fclean all