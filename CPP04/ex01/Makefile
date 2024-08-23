# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pdeson <pdeson@student.42mulhouse.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/02 08:25:11 by pdeson            #+#    #+#              #
#    Updated: 2024/08/19 12:31:25 by pdeson           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= BurningAnimals
CC			= @c++
CFLAGS		= -Werror -Wextra -Wall -std=c++98
SANITIZER	= -fsanitize=address
SRCES		= Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp main.cpp

OBJS		= $(SRCES:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@echo "\033[0;38;5;226m Compiling \033[0m\n"
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

debug:
	@echo "\033[0;38;5;226m Compiling with fsanitize\033[0m\n"
	$(CC) $(CFLAGS) $(OBJS) $(SANITIZER) -o $(NAME)


clean:
	@echo "\033[0;38;5;226m Cleaning \033[0m\n"
	@rm -f *.o
	@echo "\033[0;32m Done \033[0;37m\n"

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re debug