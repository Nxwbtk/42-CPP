# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: buntakansirikamonthip <buntakansirikamonth +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/26 23:50:02 by bsirikam          #+#    #+#              #
#    Updated: 2024/01/28 01:45:14 by buntakansirikamo ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = btc

CC = c++
CFLAGS = -Wall -Wextra -Werror
CPPFLAGS = -std=c++98

OBJS = $(SRCS:.cpp=.o)
OBJ_DIR = obj
OBJ = $(addprefix $(OBJ_DIR)/, $(OBJS))

$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) $(CPPFLAGS) -c $< -o $@

RM = rm -rf

SRCS = main.cpp BitcoinExchange.cpp

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	@$(RM) $(OBJ_DIR)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re