CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++17

SRCS = main.cpp Animal.cpp WrongAnimal.cpp Dog.cpp Cat.cpp
OBJS = $(SRCS:.cpp=.o)
TARGET = polymorphism

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(TARGET)

re: fclean all

.PHONY: all clean fclean re