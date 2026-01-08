NAME    = libft.a

CC      = cc
CFLAGS  = -Wall -Wextra -Werror

AR      = ar rcs
RM      = rm -f

SRC   = ft_atoi.c ft_isalnum.c ft_isdigit.c ft_memcmp.c ft_memset.c ft_strdup.c ft_strlcpy.c \
		ft_strnstr.c ft_substr.c libft.h ft_bzero.c ft_isalpha.c ft_isprint.c ft_memcpy.c \
		ft_strchr.c ft_strjoin.c ft_strlen.c ft_strrchr.c ft_tolower.c ft_calloc.c ft_isascii.c \
		ft_memchr.c ft_memmove.c ft_strcmp.c ft_strlcat.c ft_strncmp.c ft_strtrim.c ft_toupper.c \

OBJ     = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ) $(BNS_OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
