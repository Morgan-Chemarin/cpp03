NAME = fragtrap
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -Iinc

SRCS = \
    src/main.cpp \
	src/ClapTrap.cpp \
	src/ScavTrap.cpp \
	src/FragTrap.cpp 

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp inc/ClapTrap.hpp inc/ScavTrap.hpp inc/FragTrap.hpp Makefile
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re