# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ybokina <ybokina@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/23 12:12:47 by ybokina           #+#    #+#              #
#    Updated: 2018/10/14 23:20:15 by ybokina          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_gkrellm

FLAGS = -Wall -Wextra -Werror

INC =	IMonitorDisplay.hpp\
		IMonitorModule.hpp

SOURCES = main.cpp \
			Module.cpp \
			DisplayText.cpp \
			DisplayVisual.cpp \
			
INCLUDES	=	-I./frameworks/SDL2.framework/Headers \
				-I./frameworks/SDL2_ttf.framework/Headers \
				-I./frameworks/SDL2_image.framework/Headers \
				-I./frameworks/SDL2_mixer.framework/Headers \
				-I./frameworks/SDL2_net.framework/Headers \
				-F./frameworks

FRAMEWORKS	=	-F./frameworks \
				-rpath ./frameworks \
				-framework OpenGL -framework AppKit -framework OpenCl \
				-framework SDL2 -framework SDL2_ttf -framework SDL2_image \
				-framework SDL2_mixer -framework SDL2_net

SDL_FRM = -framework SDL2 -F /Library/Frameworks/ ./SDL2_ttf/SDL2_ttf
SDL_INC = -I /Library/Frameworks/SDL2.framework/Headers/ -I SDL_ttf/

OBJ = $(SOURCES:.cpp=.o)

CC = clang++

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) $(FRAMEWORKS) -o $(NAME) $(OBJ) -lncurses
	@echo "\033[1;92m./ft_gkrellm is created\033[1;92m"

%.o: %.cpp $(INC)
	@clang++ $(FLAGS) -c $< -o $@ $(INCLUDES)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
