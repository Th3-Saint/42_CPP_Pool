# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mrobaii <mrobaii@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/20 16:02:07 by mrobaii           #+#    #+#              #
#    Updated: 2023/03/10 12:35:28 by mrobaii          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


define COMPILING

                                       
 .-           .. .          .          
(  .-..-.-..-..| ..-..-.  .-| .-..-..-,
 `-`-'' ' '|-'''-'' '`-|  `-'-`-'' '`'-
           '         `-'               
endef

export COMPILING
export HEADER

_Name	=	Bureaucrat

CC		=	c++

CPPFLAGS	=	-Wall -Werror -Wextra -std=c++98

SRC		= 	main.cpp \
			Bureaucrat.cpp \
			Form.cpp

OBJ		=	$(SRC:.cpp=.o)

RM		=	rm -rf

all:  $(_Name)

$(_Name):  $(OBJ)
	 $(CC) $(CPPFLAGS) $(OBJ) -o $(_Name)
	@echo "\033[38;5;40m$$COMPILING\033[38;5;231m"

clean:
	@ $(RM) $(_Name)
	@ echo "\033[38;5;196mDelete excutable...\n\nDone"
fclean: clean
	@ $(RM) $(OBJ)
	@ echo "\033[38;5;196m\nDelete object files...\n\nDone"

re:	fclean all