NAME = phonebook

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = 	Contact.cpp \
		PhoneBook.cpp \
		main.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@echo "---- Building of $(NAME) ----$(RESET)";
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re