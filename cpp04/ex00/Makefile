# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/03 19:08:19 by marvin            #+#    #+#              #
#    Updated: 2025/11/03 19:08:19 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = polymorphism

CC = c++

FLAGS = -Wall -Werror -Wextra -std=c++98

SRCS = main.cpp

OBJS_FOLDER = ./objs/

OBJS = $(addprefix $(OBJS_FOLDER), $(SRCS:.cpp=.o))

all: $(OBJS_FOLDER) $(NAME)

$(OBJS_FOLDER):
	@mkdir -p $(OBJS_FOLDER)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

$(OBJS_FOLDER)%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS_FOLDER)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
