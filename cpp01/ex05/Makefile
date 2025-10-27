# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/27 14:46:04 by brunogue          #+#    #+#              #
#    Updated: 2025/10/27 14:56:14 by brunogue         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harl

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = Main.cpp

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