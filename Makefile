# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: dvan-kle <dvan-kle@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2023/04/20 22:07:37 by dvan-kle      #+#    #+#                  #
#    Updated: 2023/05/27 14:14:25 by dvan-kle      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

LIBFT = libft/libft.a

CC = gcc
CC_FLAGS = -Wall -Wextra -Werror

SRC = src/push_swap.c src/checks.c src/list.c src/swap.c src/push.c src/rotate.c src/reverse_rotate.c src/simple_sort.c src/radix.c

OBJ_DIR = obj/
OBJ = $(addprefix $(OBJ_DIR), $(SRC:.c=.o))

all: $(NAME)

$(NAME): $(OBJ) $(LIBFT)
	@echo "\033[32mCompile push_swap\033[0m"
	$(CC) $(CC_FLAGS) $(OBJ) $(LIBFT) -o $(NAME)
	@echo "\033[32mBuild complete\033[0m"

$(OBJ_DIR)%.o: %.c
	@echo "\033[32mCompile Objects\033[0m"
	mkdir -p $(dir $@)
	$(CC) $(CC_FLAGS) -c $< -o $@

$(LIBFT):
	@echo "\033[32mBuilding Libft\033[0m"
	$(MAKE) all -C libft

clean:
	@echo "\033[32mRun clean\033[0m"
	rm -rf $(OBJ_DIR)
	$(MAKE) clean -C libft

fclean: clean
	@echo "\033[32mRun fclean\033[0m"
	rm -f $(NAME)
	$(MAKE) fclean -C libft

re: fclean all