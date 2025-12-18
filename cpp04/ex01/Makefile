# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/04 18:02:59 by brunogue          #+#    #+#              #
#    Updated: 2025/12/18 19:41:27 by brunogue         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Brain

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp

OBJS_FOLDER = ./objs/

OBJS = $(addprefix $(OBJS_FOLDER), $(SRCS:.cpp=.o))

# ================= COLORS =================
RESET   = \033[0m
BOLD    = \033[1m
RED     = \033[31m
GREEN   = \033[32m
YELLOW  = \033[33m
BLUE    = \033[34m
CYAN    = \033[36m

# ================= RULES ==================

all: banner $(OBJS_FOLDER) $(NAME)

banner:
	@echo "$(CYAN)$(BOLD)====================================$(RESET)"
	@echo "$(CYAN)$(BOLD)   Building $(NAME)$(RESET)"
	@echo "$(CYAN)$(BOLD)====================================$(RESET)"

$(OBJS_FOLDER):
	@mkdir -p $(OBJS_FOLDER)
	@echo "$(BLUE)[DIR]$(RESET)  objs folder created"

$(NAME): $(OBJS)
	@echo "$(YELLOW)[LINK]$(RESET) linking objects"
	@$(CC) $(FLAGS) $(OBJS) -o $(NAME)
	@echo "$(GREEN)✔ Build complete: $(NAME)$(RESET)"

$(OBJS_FOLDER)%.o: %.cpp
	@mkdir -p $(dir $@)
	@echo "$(CYAN)[CC]$(RESET)   $<"
	@$(CC) $(FLAGS) -c $< -o $@

clean:
	@echo "$(RED)[CLEAN]$(RESET) removing objects"
	@rm -rf $(OBJS_FOLDER)

fclean: clean
	@echo "$(RED)[FCLEAN]$(RESET) removing binary"
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re banner