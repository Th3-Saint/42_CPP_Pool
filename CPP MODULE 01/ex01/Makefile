# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mrobaii <mrobaii@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/20 23:10:47 by mrobaii           #+#    #+#              #
#    Updated: 2022/12/20 23:29:18 by mrobaii          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

define HEADER                                                                                                                     


  __  __                  
 |  \/  |                 
 | \  / | ___   __ _ _ __ 
 | |\/| |/ _ \ / _` | '__|
 | |  | | (_) | (_| | |   
 |_|  |_|\___/ \__,_|_|   
                                          
  
__________            ___.   .__               
\____    /____   _____\_ |__ |__| ____   ______
  /     //  _ \ /     \| __ \|  |/ __ \ /  ___/
 /     /(  <_> )  Y Y  \ \_\ \  \  ___/ \___ \ 
/_______ \____/|__|_|  /___  /__|\___  >____  >
        \/           \/    \/        \/     \/ 

endef

define COMPILING

                                       
 .-           .. .          .          
(  .-..-.-..-..| ..-..-.  .-| .-..-..-,
 `-`-'' ' '|-'''-'' '`-|  `-'-`-'' '`'-
           '         `-'               
endef

export COMPILING
export HEADER

NAME	=	MoarBrainz

CC		=	c++

CPPFLAGS	=	-Wall -Werror -Wextra -std=c++98

SRC		= 	main.cpp \
			Zombie.cpp \
			zombieHorde.cpp

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