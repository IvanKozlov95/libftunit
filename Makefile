# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ivankozlov <ivankozlov@student.42.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/18 13:26:34 by julee             #+#    #+#              #
#    Updated: 2019/05/19 22:11:25 by ivankozlov       ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libunit.a

CC := gcc
CFLAGS := -Wall -Wextra -Werror

RM := rm -f

LIBFT_DIR = libft/
TESTS_DIR = tests/

LIB = $(LIBFT_DIR)libft.a

LIBFT_INC = libft/includes/
INC_DIR := includes/
INC = -I $(INC_DIR) -I $(LIBFT_INC)

FRM_DIR := framework/
OBJ_DIR = obj/

FRM_SRC = $(notdir $(wildcard $(FRM_DIR)*.c))
FRM_OBJ = $(FRM_SRC:%.c=%.o)

SRCS = $(addprefix $(FRM_DIR), $(FRM_SRC))
OBJS = $(FRM_OBJ)

all: $(NAME)

test: $(NAME)
	@make -C $(TESTS_DIR)
	$(TESTS_DIR)unit_test

$(LIB):
	@make -C $(LIBFT_DIR)

$(NAME): $(LIB) $(OBJS)
	@ar rc $(NAME) $(OBJS) $(LIB)
	@ranlib $(NAME)

$(OBJS):
	echo $(SRCS)
	$(CC) $(CFLAGS) $(INC) -c $(SRCS)

clean:
	$(RM) $(OBJS)
	@make clean -C $(TESTS_DIR)

fclean: clean
	$(RM) $(NAME)
	@make fclean -C $(TESTS_DIR)

re: fclean all