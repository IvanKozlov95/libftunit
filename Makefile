# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: julee <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/18 13:26:34 by julee             #+#    #+#              #
#    Updated: 2019/05/18 13:26:36 by julee            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libunit.a

CC := gcc

RM := rm -f

CFLAGS := -Wall -Wextra -Werror

INC := includes

SRCS := framework/

OBJS := $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

$(OBJS):
	$(CC) $(CFLAGS) -I $(INC) -c $(SRCS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all