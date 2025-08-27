# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/22 13:59:37 by brunogue          #+#    #+#              #
#    Updated: 2025/08/25 18:36:35 by brunogue         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = megaphone.cpp
OBJS_FOLDER = ./obj/
OBJS = $(addprefix $(OBJS_FOLDER), $(SRCS:.cpp=.o)) 

all: $(OBJS_FOLDER) $(NAME)

$(OBJS_FOLDER):
	@mkdir -p $(OBJS_FOLDER)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJS_FOLDER)%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@
	
clean:
	rm -rf $(OBJS_FOLDER)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re