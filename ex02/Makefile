NAME = ex02
CC = c++ -std=c++98
CFLAGS =  -Wall -Wextra -Werror

SRC = main.cpp
all: $(NAME)

OBJ = $(SRC:.cpp=.o)

%.o: %.cpp MultantStack.hpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $(OBJ)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all