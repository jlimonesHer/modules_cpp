# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/20 16:58:00 by jlimones          #+#    #+#              #
#    Updated: 2023/08/30 10:44:30 by jlimones         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Data
CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98
SRC =   main.cpp \
		Data.cpp \
		Serializer.cpp \

AUTHOR = jlimones
DATE = 28/08/2023

COM_COLOR   = \033[0;34m
OBJ_COLOR   = \033[0;36m
OK_COLOR   = \033[0;32m
ERROR_COLOR = \033[0;31m
WARN_COLOR  = \033[0;33m
NO_COLOR    = \033[m

OBJ = $(SRC:.cpp=.o)

%.o: %.cpp
	${CC} ${CFLAGS} -c $^ -o $@

all: header $(NAME)
	@rm -rf .files_changed

header:
	@printf "%b" "$(OK_COLOR)"
	@echo "        ___  _____ ___  ___      _        "
	@echo "       /   |/ __  \|  \/  |     | |       "
	@echo "      / /| |\`' / /'| .  . | __ _| | _____ "
	@echo "     / /_| |  / /  | |\/| |/ _\` | |/ / _ \\"
	@echo "     \___  |./ /___| |  | | (_| |   <  __/"
	@echo "         |_/\_____/\_|  |_/\__,_|_|\_\___| v2"
	@echo
ifneq ($(HASH),)
	@printf "%b" "$(OBJ_COLOR)Name:	$(WARN_COLOR)$(NAME)\n"
else
	@printf "%b" "$(OBJ_COLOR)Name:	$(WARN_COLOR)$(NAME)\n"
endif
	@printf "%b" "$(OBJ_COLOR)Author:	$(WARN_COLOR)$(AUTHOR)\n"
	@printf "%b" "$(OBJ_COLOR)Date: 	$(WARN_COLOR)$(DATE)\n\033[m"
	@printf "%b" "$(OBJ_COLOR)CC: 	$(WARN_COLOR)$(CC)\n\033[m"
	@printf "%b" "$(OBJ_COLOR)Flags: 	$(WARN_COLOR)$(CFLAGS)\n\033[m"

$(NAME): ${OBJ}
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@printf "%b" "$(OK_COLOR)" $(NAME)" compilado\n"

skiperror:
	@$(CC) -o $(NAME) $(SRC)

clean: header
	@rm -f $(OBJ)

fclean: header clean
	@printf "%b" "$(OK_COLOR)" "fclean ejecutado correctamente\n"
	@rm -f $(NAME)
	

re: fclean all

.PHONY: all lib clean fclean re