# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mrobaii <mrobaii@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/20 16:02:07 by mrobaii           #+#    #+#              #
#    Updated: 2022/12/20 19:29:03 by mrobaii          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

define HEADER                                                                                                                     
                        

 _______ _       _           _  ______              _     
(_______) |     | |         | |(____  \            | |    
 _   ___| | ___ | |__  _____| | ____)  )_____ ____ | |  _ 
| | (_  | |/ _ \|  _ \(____ | ||  __  ((____ |  _ \| |_/ )
| |___) | | |_| | |_) ) ___ | || |__)  ) ___ | | | |  _ ( 
 \_____/ \_)___/|____/\_____|\_)______/\_____|_| |_|_| \_)
                                                          
                                                           
      
endef

define COMPILING

                                       
 .-           .. .          .          
(  .-..-.-..-..| ..-..-.  .-| .-..-..-,
 `-`-'' ' '|-'''-'' '`-|  `-'-`-'' '`'-
           '         `-'               
endef

export COMPILING
export HEADER

NAME	=	GlobalBank

CC		=	c++

CPPFLAGS	=	-Wall -Werror -Wextra -std=c++98

SRC		= 	main.cpp\
			Account.cpp\

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