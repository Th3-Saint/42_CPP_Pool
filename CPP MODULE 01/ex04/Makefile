# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mrobaii <mrobaii@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/15 05:15:12 by mrobaii           #+#    #+#              #
#    Updated: 2023/02/19 04:15:18 by mrobaii          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


define COMPILING
                                       
 .-           .. .          .          
(  .-..-.-..-..| ..-..-.  .-| .-..-..-,
 `-`-'' ' '|-'''-'' '`-|  `-'-`-'' '`'-
           '         `-'
endef

export


export COMPILING


NAME = FileReplace

SRC = 	main.cpp \
		FileReplace.cpp \

OBJ = $(SRC:.cpp=.o)

CPPFLAGS	=	-Wall -Werror -Wextra -std=c++98

CC			= c++

RM			= rm -rf

all:  $(NAME)

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