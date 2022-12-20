# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mrobaii <mrobaii@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/11 16:28:16 by mrobaii           #+#    #+#              #
#    Updated: 2022/12/20 19:27:57 by mrobaii          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

define HEADER                                                                                                                     

                               _                       
                              | |                      
 ____  _____  ____ _____ ____ | |__   ___  ____  _____ 
|    \| ___ |/ _  (____ |  _ \|  _ \ / _ \|  _ \| ___ |
| | | | ____( (_| / ___ | |_| | | | | |_| | | | | ____|
|_|_|_|_____)\___ \_____|  __/|_| |_|\___/|_| |_|_____)
            (_____|     |_|                            
                                                    
endef

define COMPILING

                                       
 .-           .. .          .          
(  .-..-.-..-..| ..-..-.  .-| .-..-..-,
 `-`-'' ' '|-'''-'' '`-|  `-'-`-'' '`'-
           '         `-'               
endef

export COMPILING
export HEADER

NAME	=	megaphone

CC		=	c++

CPPFLAGS	=	-Wall -Werror -Wextra -std=c++98

SRC		= 	megaphone.cpp

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