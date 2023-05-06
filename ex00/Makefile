NAME = megaphone

SRC = megaphone.cpp

OBJ = $(SRC:.cpp=.o)

CC = g++

CFLAGS = -Wall -Wextra -Werror -std=c++98

%.o:%.cpp
			$(CC) $(CFLAGS) -c $< -o $@

all:		$(NAME)

$(NAME):	$(OBJ) $(BIN)
			$(CFLAGS) $(OBJ) -o $(NAME)

clean:
			rm -f $(OBJ)

fclean:
			clean
			rm -f $(NAME)

re:
			fclean all
