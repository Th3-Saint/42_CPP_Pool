# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mrobaii <mrobaii@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/15 05:15:12 by mrobaii           #+#    #+#              #
#    Updated: 2023/02/15 05:28:05 by mrobaii          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

define HEADER

  ____            _ _ _ _ _ _ _                               ______
 |  _ \          (_|_|_|_|_|_|_)                             |___  /
 | |_) |_ __ __ _ _ _ _ _ _ _ _ _ __  _ __  _ __  ____________  / / 
 |  _ <| '__/ _` | | | | | | | | '_ \| '_ \| '_ \|_  /_  /_  / / /  
 | |_) | | | (_| | | | | | | | | | | | | | | | | |/ / / / / / / /__ 
 |____/|_|  \__,_|_|_|_|_|_|_|_|_| |_|_| |_|_| |_/___/___/___/_____|
                                                                    
                                                                    

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


NAME = BraiiiiiiinnnzzzZ

SRC = 	main.cpp \
		Zombie.cpp \
		newZombie.cpp \
		randomChump.cpp

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