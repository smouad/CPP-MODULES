NAME = Zombie

CC = c++
FLACG = -Wall -Wextra -Werror -std=c++98

RM = rm -f

SRCS = Zombie.cpp newZombie.cpp randomChump.cpp main.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLACG) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean	all
