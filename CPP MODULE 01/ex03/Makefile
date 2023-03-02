# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mrobaii <mrobaii@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/15 05:15:12 by mrobaii           #+#    #+#              #
#    Updated: 2023/02/19 03:06:53 by mrobaii          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

define HEADER

        _       _                     
       (_)     | |                    
 __   ___  ___ | | ___ _ __   ___ ___ 
 \ \ / / |/ _ \| |/ _ \ '_ \ / __/ _ \
  \ V /| | (_) | |  __/ | | | (_|  __/
   \_/ |_|\___/|_|\___|_| |_|\___\___|
                                      
                                      

endef

define COMPILING
                                       
 .-           .. .          .          
(  .-..-.-..-..| ..-..-.  .-| .-..-..-,
 `-`-'' ' '|-'''-'' '`-|  `-'-`-'' '`'-
           '         `-'
endef

export


export COMPILING
export HEADER


NAME = violence

SRC = 	main.cpp \
		HumanA.cpp \
		HumanB.cpp \
		Weapon.cpp \

OBJ = $(SRC:.cpp=.o)

CPPFLAGS	=	-Wall -Werror -Wextra -std=c++98

CC			= c++

RM			= rm -rf

all: header $(NAME)

header:
	@echo "\033[38;5;40m$$HEADER\n"
	

$(NAME): $(OBJ)
		$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)
		@echo "\033[38;5;40m$$COMPILING\033[38;5;231m"


clean:
	@ $(RM) $(NAME)
	@ echo "\033[38;5;196mDelete excutable...\n\nDone"
	
fclean: clean
		@ $(RM) $(OBJ)
		@ echo "\033[38;5;196m\nDelete object files...\n\nDone"

re: flcean all