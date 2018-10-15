# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: otiniako <otiniako@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/10 21:49:48 by otiniako          #+#    #+#              #
#    Updated: 2018/10/10 22:13:10 by otiniako         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = base

CPP = clang++

FLAGS = -Wall -Wextra -Werror

SRC = main.cpp \
		A.cpp \
		B.cpp \
		C.cpp \
		Base.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CPP) $(FLAGS) -o $(NAME) $(OBJ)
	@echo "\033[1;92mbase is created!\033[1;92m"

$(OBJ): %.o: %.cpp
	@$(CPP) $(FLAGS) -o $@ -c $<

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all