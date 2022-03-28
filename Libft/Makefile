# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/11 13:00:03 by ducarkus          #+#    #+#              #
#    Updated: 2022/01/27 17:59:53 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_bzero.c \
	ft_isprint.c \
	ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_tolower.c \
	ft_toupper.c \
	ft_strlen.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strnstr.c \
	ft_strncmp.c \
	ft_atoi.c \
	ft_memset.c \
	ft_isascii.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_strdup.c \
	ft_calloc.c \
	ft_itoa.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_substr.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_split.c \
	ft_strmapi.c \
	ft_striteri.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)
	gcc -Wall -Wextra -Werror -c $(SRC)

clean:
	rm -rf $(OBJ) $(OBJ_B)
	
fclean: clean
	rm -rf $(NAME)

re: fclean all
	
.PHONY: clean fclean re all
