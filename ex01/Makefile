NAME = phonebook

SRC = PhoneBook.cpp Contact.cpp main.cpp

OBJ = $(SRC:%.cpp=%.o)

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
			rm -f $(OBJ)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

%.o:	%.cpp
			$(CC) $(CFLAGS) -c $< -o $@

.PHONY:		all clean fclean re
