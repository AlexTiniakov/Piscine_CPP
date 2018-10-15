# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: otiniako <otiniako@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/10 21:49:48 by otiniako          #+#    #+#              #
#    Updated: 2018/10/10 21:55:27 by otiniako         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = convert

CPP = clang++

FLAGS = -Wall -Wextra -Werror

SRC = Conversion.cpp \
		 main.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CPP) $(FLAGS) -o $(NAME) $(OBJ)
	@echo "\033[1;92mconvert is created!\033[1;92m"

$(OBJ): %.o: %.cpp
	@$(CPP) $(FLAGS) -o $@ -c $<

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all