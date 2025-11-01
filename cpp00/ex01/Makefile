# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/25 19:11:29 by brunogue          #+#    #+#              #
#    Updated: 2025/11/01 17:31:05 by brunogue         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = PhoneBook.cpp Contact.cpp main.cpp
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