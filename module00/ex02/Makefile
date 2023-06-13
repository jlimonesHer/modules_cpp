# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/08 13:16:05 by jlimones          #+#    #+#              #
#    Updated: 2023/06/13 11:11:48 by jlimones         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Account
CPP = clang++
CFLAGS = -Wall -Werror -Wextra -std=c++98
SRC = 	tests.cpp \
		Account.cpp \

AUTHOR = jlimones
DATE = 8/06/2023

COM_COLOR   = \033[0;34m
OBJ_COLOR   = \033[0;36m
OK_COLOR    = \033[0;32m
ERROR_COLOR = \033[0;31m
WARN_COLOR  = \033[0;33m
NO_COLOR    = \033[m

OBJ = $(SRC:.cpp=.o)

all: header $(NAME)

header:
	@printf "%b" "$(OK_COLOR)"
	@echo "        ___  _____ ___  ___      _        "
	@echo "       /   |/ __  \|  \/  |     | |       "
	@echo "      / /| |\`' / /'| .  . | __ _| | _____ "
	@echo "     / /_| |  / /  | |\/| |/ _\` | |/ / _ \\"
	@echo "     \___  |./ /___| |  | | (_| |   <  __/"
	@echo "         |_/\_____/\_|  |_/\__,_|_|\_\___| v2"
	@echo
	@printf "%b" "$(OBJ_COLOR)Name:	$(WARN_COLOR)$(NAME)\n"
	@printf "%b" "$(OBJ_COLOR)Author:	$(WARN_COLOR)$(AUTHOR)\n"
	@printf "%b" "$(OBJ_COLOR)Date: 	$(WARN_COLOR)$(DATE)\n\033[m"
	@printf "%b" "$(OBJ_COLOR)CC: 	$(WARN_COLOR)$(CPP)\n\033[m"
	@printf "%b" "$(OBJ_COLOR)Flags: 	$(WARN_COLOR)$(CFLAGS)\n\033[m"

$(NAME): ${OBJ}
	@$(CPP) $(CFLAGS) $(OBJ) -o $(NAME)
	@printf "%b" "$(OK_COLOR)" $(NAME)" compilado\n"

clean: header
	@rm -f $(OBJ)
	@rm -f $(NAME)

fclean: header clean
	@printf "%b" "fclean ejecutado correctamente\n"
	

re: fclean all

.PHONY: all clean fclean re