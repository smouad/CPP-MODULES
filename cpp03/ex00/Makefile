# NAME = ClapTrap
#
# CXX = c++
#
# FLAGS = -Wall -Wextra -Werror -std=c++98
#
# SRC = main.cpp ClapTrap.cpp
#
# OBJ = $(SRC:.cpp=.o)
#
# all: $(NAME)
#
# $(OBJ): %.o %.cpp
#
# $(NAME): $(OBJ)
# 	$(CC) $(FLAGS) $(OBJ) -o $(NAME)
#
# clean:
# 	rm -rf $(OBJ)
#
# fclean: clean
# 	rm -rf $(NAME)
#
# re: clean all


NAME = ClapTrap

CC = g++
FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp ClapTrap.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(OBJ): %.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: clean all
