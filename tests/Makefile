# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ivankozlov <ivankozlov@student.42.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/19 02:10:56 by ivankozlov        #+#    #+#              #
#    Updated: 2019/05/19 03:22:37 by ivankozlov       ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = unit_test

CC := gcc
CFLAGS := -Wall -Wextra -Werror

INC_DIR = ../includes/
LIBFT_DIR = ../libft/
FRAMEWORK_DIR = ../

INC = -I $(INC_DIR) -I $(LIBFT_DIR)includes/

LIB = -l $(FRAMEWORK_DIR)libftunit.a
LIB = -L ../libft -lft -L .. -lunit

OBJ_DIR = obj/

STRLEN_DIR = strlen/
STRLEN_SRC = $(notdir $(wildcard $(STRLEN_DIR)*.c))
STRLEN_OBJ = $(STRLEN_SRC:%.c=%.o)

SRC = $(addprefix $(STRLEN_DIR), $(STRLEN_SRC))
OBJ += $(addprefix $(OBJ_DIR), $(STRLEN_OBJ))

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(LIB) -o $(NAME) $(OBJ) $(OBJ_DIR)main.o
	@echo "[INFO] $(NAME) executable created"

$(OBJ_DIR)%.o: $(STRLEN_DIR)%.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) $(INC) -c $< -o $@
	$(CC) $(CFLAGS) $(INC) -c main.c -o $(OBJ_DIR)main.o

clean:
	@if [ -d "./$(OBJ_DIR)" ]; then\
		/bin/rm -rf $(OBJ_DIR);\
		/bin/echo "[INFO] Objects removed.";\
	fi;

fclean: clean
	@if test -e $(NAME); then\
		/bin/rm $(NAME);\
		/bin/echo "[INFO] $(NAME) executable deleted";\
	fi;

re: fclean all

.PHONY: all $(NAME) clean fclean re