# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: metaskin <metaskin@student.42istanbul.c    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/31 12:14:42 by metaskin          #+#    #+#              #
#    Updated: 2026/01/04 13:27:24 by metaskin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = libft.a

CC      = cc
CFLAGS  = -Wall -Wextra -Werror

AR      = ar rcs
RM      = rm -f

SRC     = $(filter-out %_bonus.c, $(wildcard *.c))
BNS     = $(wildcard *_bonus.c)

OBJ     = $(SRC:.c=.o)
BNS_OBJ = $(BNS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

bonus: $(BNS_OBJ)
	$(AR) $(NAME) $(BNS_OBJ)

clean:
	$(RM) $(OBJ) $(BNS_OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
