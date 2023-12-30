# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bsirikam <bsirikam@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/05 00:07:45 by bsirikam          #+#    #+#              #
#    Updated: 2023/12/30 05:05:19 by bsirikam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ScalarConverter

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

SRCS = main.cpp ScarlarConverter.cpp

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	@$(RM) $(OBJ_DIR)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re