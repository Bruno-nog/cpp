# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/13 18:55:41 by brunogue          #+#    #+#              #
#    Updated: 2025/12/13 19:06:44 by brunogue         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =  PmergeMe

CC = c++ 

FLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp BitcoinExchange.cpp

OBJS_FOLDER = ./objs/

OBJS = $(addprefix $(OBJS_FOLDER), $(SRCS:.cpp=.o))

all: $(OBJS_FOLDER) $(NAME)

$(OBJS_FOLDER):
	@mkdir -p $(OBJS_FOLDER)

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