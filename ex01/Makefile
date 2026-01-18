NAME = phonebook

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = 	Contact.cpp \
		PhoneBook.cpp \
		main.cpp

all: $(NAME)

$(NAME): $(SRC)
	@echo "---- Building of $(NAME) ----$(RESET)";
	$(CXX) $(CXXFLAGS) -o $(NAME) $(SRC)

clean:

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re