# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seonggki <seonggki@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/24 17:30:50 by seonggki          #+#    #+#              #
#    Updated: 2022/02/03 19:27:19 by seonggki         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = horde

CC = clang++ -std=c++98

CFLAGS = -Wall -Wextra -Werror

SRCS = Zombie.cpp \
		ZombieHorde.cpp \
		main.cpp

OBJS = $(SRCS:.cpp=.o)

%.o : %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re