# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mrobaii <mrobaii@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/21 08:56:32 by mrobaii           #+#    #+#              #
#    Updated: 2022/12/21 08:58:33 by mrobaii          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

define HEADER                                                                                                                     


  _    _ _____ 
 | |  | |_   _|
 | |__| | | |  
 |  __  | | |  
 | |  | |_| |_ 
 |_|  |_|_____|
                        
  _______ _    _ _____  _____ 
 |__   __| |  | |_   _|/ ____|
    | |  | |__| | | | | (___  
    | |  |  __  | | |  \___ \ 
    | |  | |  | |_| |_ ____) |
    |_|  |_|  |_|_____|_____/ 
                                                      
  ____  _____            _____ _   _ 
 |  _ \|  __ \     /\   |_   _| \ | |
 | |_) | |__) |   /  \    | | |  \| |
 |  _ <|  _  /   / /\ \   | | | . ` |
 | |_) | | \ \  / ____ \ _| |_| |\  |
 |____/|_|  \_\/_/    \_\_____|_| \_|
                                     
                                     
endef

define COMPILING

                                       
 .-           .. .          .          
(  .-..-.-..-..| ..-..-.  .-| .-..-..-,
 `-`-'' ' '|-'''-'' '`-|  `-'-`-'' '`'-
           '         `-'               
endef

export COMPILING
export HEADER

NAME	=	ThisBrain

CC		=	c++

CPPFLAGS	=	-Wall -Werror -Wextra -std=c++98

SRC		= 	main.cpp \

OBJ		=	$(SRC:.cpp=.o)

RM		=	rm -rf

all: header $(NAME)

header:
	@echo "\033[38;5;40m$$HEADER\n"

$(NAME):  $(OBJ)
	 $(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)
	@echo "\033[38;5;40m$$COMPILING\033[38;5;231m"

clean:
	@ $(RM) $(NAME)
	@ echo "\033[38;5;196mDelete excutable...\n\nDone"

fclean: clean
	@ $(RM) $(OBJ)
	@ echo "\033[38;5;196m\nDelete object files...\n\nDone"

re:	fclean all