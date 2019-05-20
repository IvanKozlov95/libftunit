# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ivankozlov <ivankozlov@student.42.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/19 02:10:56 by ivankozlov        #+#    #+#              #
#    Updated: 2019/05/19 21:55:04 by ivankozlov       ###   ########.fr        #
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
STRLEN_OBJ_FILES = $(STRLEN_SRC:%.c=%.o)
STRLEN_OBJ = $(addprefix $(STRLEN_DIR), $(STRLEN_OBJ_FILES))

STRCMP_DIR = strcmp/
STRCMP_SRC = $(notdir $(wildcard $(STRCMP_DIR)*.c))
STRCMP_OBJ_FILES = $(STRCMP_SRC:%.c=%.o)
STRCMP_OBJ = $(addprefix $(STRCMP_DIR), $(STRCMP_OBJ_FILES))

STRDUP_DIR = strdup/
STRDUP_SRC = $(notdir $(wildcard $(STRDUP_DIR)*.c))
STRDUP_OBJ_FILES = $(STRDUP_SRC:%.c=%.o)
STRDUP_OBJ = $(addprefix $(STRDUP_DIR), $(STRDUP_OBJ_FILES))

OBJ = $(addprefix $(OBJ_DIR), $(STRLEN_OBJ))
OBJ += $(addprefix $(OBJ_DIR), $(STRCMP_OBJ))
OBJ += $(addprefix $(OBJ_DIR), $(STRDUP_OBJ))

all: $(NAME)

$(NAME): obj $(OBJ)
	$(CC) $(CFLAGS) $(LIB) -o $(NAME) $(OBJ) $(OBJ_DIR)main.o
	@echo "[INFO] $(NAME) executable created"

obj:
	@mkdir -p $(OBJ_DIR)$(FUNC_DIR)
	$(CC) $(CFLAGS) $(INC) -c main.c -o $(OBJ_DIR)main.o

$(OBJ_DIR)$(STRCMP_DIR)%.o: $(STRCMP_DIR)%.c
	@mkdir -p $(OBJ_DIR)$(STRCMP_DIR)
	$(CC) $(CFLAGS) $(INC) -c $< -o $@

$(OBJ_DIR)$(STRLEN_DIR)%.o: $(STRLEN_DIR)%.c
	@mkdir -p $(OBJ_DIR)$(STRLEN_DIR)
	$(CC) $(CFLAGS) $(INC) -c $< -o $@

$(OBJ_DIR)$(STRDUP_DIR)%.o: $(STRDUP_DIR)%.c
	@mkdir -p $(OBJ_DIR)$(STRDUP_DIR)
	$(CC) $(CFLAGS) $(INC) -c $< -o $@

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