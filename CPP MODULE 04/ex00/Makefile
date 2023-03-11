# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mrobaii <mrobaii@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/20 16:02:07 by mrobaii           #+#    #+#              #
#    Updated: 2023/03/09 02:52:09 by mrobaii          ###   ########.fr        #
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

NAME	=	Animals

CC		=	c++

CPPFLAGS	=	-Wall -Werror -Wextra -std=c++98

SRC		= 	main.cpp \
			Dog.cpp \
			Cat.cpp \
			Animal.cpp \
			WrongAnimal.cpp \
			WrongCat.cpp

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