# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mrobaii <mrobaii@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/11 18:52:35 by mrobaii           #+#    #+#              #
#    Updated: 2022/12/20 19:29:11 by mrobaii          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


define HEADER                                                                                                                     
                        

 ______  _                       ______              _     
(_____ \| |                     (____  \            | |    
 _____) ) |__   ___  ____  _____ ____)  ) ___   ___ | |  _ 
|  ____/|  _ \ / _ \|  _ \| ___ |  __  ( / _ \ / _ \| |_/ )
| |     | | | | |_| | | | | ____| |__)  ) |_| | |_| |  _ ( 
|_|     |_| |_|\___/|_| |_|_____)______/ \___/ \___/|_| \_)
                                                           
      
endef

define COMPILING

                                       
 .-           .. .          .          
(  .-..-.-..-..| ..-..-.  .-| .-..-..-,
 `-`-'' ' '|-'''-'' '`-|  `-'-`-'' '`'-
           '         `-'               
endef

export COMPILING
export HEADER

NAME	=	PhoneBook

CC		=	c++

CPPFLAGS	=	-Wall -Werror -Wextra -std=c++98

SRC		= 	main.cpp\
			PhoneBook.cpp\

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