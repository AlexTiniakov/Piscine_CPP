#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: otiniako <otiniako@student.unit.ua>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/01 16:13:19 by otiniako          #+#    #+#              #
#    Updated: 2018/10/01 16:13:20 by otiniako         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = test

CPP = clang++

FLAGS = -Wall -Wextra -Werror

SRC = Account.class.cpp \
		tests.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)
	@echo "\033[1;92mtest is created!\033[1;92m"

$(NAME): $(OBJ)
	@$(CPP) $(FLAGS) -o $(NAME) $(OBJ)

$(OBJ): %.o: %.cpp
	@$(CPP) $(FLAGS) -o $@ -c $<

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all