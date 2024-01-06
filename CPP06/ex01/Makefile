# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bsirikam <bsirikam@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/07 03:33:51 by bsirikam          #+#    #+#              #
#    Updated: 2024/01/07 03:34:10 by bsirikam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Serialization

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

SRCS = main.cpp Serializer.cpp

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	@$(RM) $(OBJ_DIR)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re