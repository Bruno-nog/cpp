# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/22 18:06:30 by brunogue          #+#    #+#              #
#    Updated: 2025/10/22 19:24:18 by brunogue         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Brainz

CC = c++

FLAGS = -Wall -Wextra -Werror

SRCS = Main.cpp

OBJS_FOLDER = /obj/

OBJS = $(addprefix $(OBJS_FOLDER), $(SRCS:.cpp=.o))

all: $(OBJS_FOLDER) $(NAME)

$(NAME)
	$(CC) $(FLAGS) -o $(OBJS)



clean: rm -rf $(OBJS_FOLDER)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY all clean fclean re