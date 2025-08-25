# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/22 13:59:37 by brunogue          #+#    #+#              #
#    Updated: 2025/08/25 17:51:32 by brunogue         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = megaphone.cpp
OBJS_FOLDER = ./obj/
OBJS = $(addprefix $(OBJS_FOLDER), $(SRCS:.cpp=.o)) 

all: $(OBJS_FOLDER) $(NAME)

$(NAME): $(OBJS)
	$(C)