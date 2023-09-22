# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ggulteki <ggulteki@student.42istanbul.com. +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/26 17:24:58 by ggulteki          #+#    #+#              #
#    Updated: 2023/09/22 13:35:06 by ggulteki         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Werror -Wextra
NAME = libft.a
SRC_FILES = src/ft_isalpha.c src/ft_isdigit.c src/ft_isalnum.c src/ft_isascii.c \
			src/ft_isprint.c src/ft_strlen.c src/ft_bzero.c src/ft_memset.c \
			src/ft_memcpy.c src/ft_toupper.c src/ft_tolower.c src/ft_strlcpy.c \
			src/ft_strlcat.c src/ft_strncmp.c src/ft_strchr.c \
			src/ft_strrchr.c src/ft_memchr.c src/ft_memcmp.c src/ft_memmove.c \
			src/ft_strnstr.c src/ft_atoi.c src/ft_calloc.c src/ft_strdup.c \
			src/ft_substr.c src/ft_strjoin.c src/ft_strtrim.c src/ft_split.c \
			src/ft_putchar_fd.c src/ft_putstr_fd.c src/ft_putendl_fd.c \
			src/ft_putnbr_fd.c src/ft_itoa.c src/ft_strmapi.c src/ft_striteri.c

SRC_FILES_BONUS = src/ft_lstnew.c src/ft_lstadd_front.c src/ft_lstsize.c \
				  src/ft_lstlast.c src/ft_lstadd_back.c src/ft_lstdelone.c \
				  src/ft_lstclear.c src/ft_lstiter.c src/ft_lstmap.c

OBJ = $(SRC_FILES:.c=.o)
OBJ_BONUS = $(SRC_FILES_BONUS:.c=.o)
RM = rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

src/%.o: src/%.c
	$(CC) $(CFLAGS) -c $< -o $@

bonus: $(OBJ_BONUS)
	ar rcs $(NAME) $(OBJ_BONUS)

clean:
	$(RM) $(OBJ) $(OBJ_BONUS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
