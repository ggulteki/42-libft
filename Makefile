# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ggulteki <ggulteki@student.42istanbul.com. +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/26 17:24:58 by ggulteki          #+#    #+#              #
#    Updated: 2023/09/01 19:50:13 by ggulteki         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Werror -Wextra
NAME = libft.a
SRC_DIR = src/
OBJ_DIR = obj/
INCLUDE = include
SRC_FILES = $(filter-out $(SRC_DIR)ft_lst%, $(wildcard $(SRC_DIR)*.c))
SRC_FILES_BONUS := $(wildcard $(SRC_DIR)ft_lst*.c)
OBJ = $(addprefix $(OBJ_DIR), $(notdir $(SRC_FILES:.c=.o)))
OBJ_BONUS = $(addprefix $(OBJ_DIR), $(notdir $(SRC_FILES_BONUS:.c=.o)))
RM = rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -I$(INCLUDE) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

bonus: $(OBJ_BONUS)
	ar rcs $(NAME) $(OBJ_BONUS)

clean:
	$(RM) $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

norm:
	@norminette $(SRC_FILES) $(INCLUDE) | grep -v Norme -B1 || true

.PHONY: all bonus clean fclean re norm paco
