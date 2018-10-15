# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: otiniako <otiniako@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/01 16:13:19 by otiniako          #+#    #+#              #
#    Updated: 2018/10/11 19:15:19 by otiniako         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = iter

CPP = clang++

FLAGS = -Wall -Wextra -Werror

SRC = iter.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)
	@echo "\033[1;92miter is created!\033[1;92m"
$(NAME): $(OBJ)
	@$(CPP) $(FLAGS) -o $(NAME) $(OBJ)

$(OBJ): %.o: %.cpp
	@$(CPP) $(FLAGS) -o $@ -c $<

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all