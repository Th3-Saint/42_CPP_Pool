# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mrobaii <mrobaii@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/20 16:02:07 by mrobaii           #+#    #+#              #
#    Updated: 2023/03/08 02:02:10 by mrobaii          ###   ########.fr        #
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

NAME	=	FragTrap

CC		=	c++

CPPFLAGS	=	-Wall -Werror -Wextra -std=c++98

SRC		= 	main.cpp \
			ClapTrap.cpp \
			FragTrap.cpp

OBJ		=	$(SRC:.cpp=.o)

RM		=	rm -rf

all:  $(NAME)

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