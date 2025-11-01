# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/24 16:57:36 by brunogue          #+#    #+#              #
#    Updated: 2025/11/01 17:29:58 by brunogue         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = UnnecessaryViolence

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp \
		Weapon.cpp \
		HumanA.cpp \
		HumanB.cpp 

OBJS_FOLDER = ./obj/

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