# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/05 13:06:55 by brunogue          #+#    #+#              #
#    Updated: 2025/12/05 13:12:28 by brunogue         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = serialization

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = srcs/main.cpp

OBJS_FOLDER = ./objs/

OBJS = $(addprefix $(OBJS_FOLDER), $(SRCS:.cpp=.o))

$(OBJS_FOLDER):
	@mkdir -p $(OBJS_FOLDER)

all: $(OBJS) $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

$(OBJS_FOLDER)%.o: %.cpp
	@mkdir -p $(dir $@)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS_FOLDER)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re