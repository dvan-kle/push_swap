# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: dvan-kle <dvan-kle@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2023/01/25 18:18:43 by dvan-kle      #+#    #+#                  #
#    Updated: 2023/01/25 18:21:04 by dvan-kle      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

C=gcc

NAME=push_swap

CFLAGS=-Wall -Werror -Wextra

SRC=	ft_printf.c \
		ft_printf_utils.c \
		ft_hexa.c 

OBJ=	$(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	make -C libftprintf
	cp libftprintf/libftprintf.a
	gcc libftprintf.a $(OBJ) -o $(NAME) 

$(OBJ): $(SRC)
	$(C) $(CFLAGS) -c $(SRC)

clean:
	rm -f $(OBJ)
	rm -f libft/*.o

fclean: clean
	rm -f $(NAME)
	rm -f libft/libft.a
	rm -f libftprintf/libftprintf.a

re: fclean all	

.PHONY: clean fclean all re