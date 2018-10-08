# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: otiniako <otiniako@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/01 16:13:19 by otiniako          #+#    #+#              #
#    Updated: 2018/10/07 20:10:32 by otiniako         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_retro

CPP = clang++

FLAGS = -Wall -Wextra -Werror

SRC = main.cpp \
		Bullets.cpp \
		Enemies.cpp \
		Game.cpp \
		Player.cpp \


OBJ = $(SRC:.cpp=.o)

all: $(NAME)
	@echo "\033[1;92mft_retro is created!\033[1;92m"
$(NAME): $(OBJ)
	@$(CPP) $(FLAGS) -o $(NAME) $(OBJ) -lncurses

$(OBJ): %.o: %.cpp
	@$(CPP) $(FLAGS) -o $@ -c $<

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all