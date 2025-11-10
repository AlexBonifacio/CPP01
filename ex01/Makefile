CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -pedantic -std=c++98

OBJS_DIR = obj
SRCS = main.cpp Zombie.cpp zombieHorde.cpp
OBJS = $(patsubst %.cpp, $(OBJS_DIR)/%.o, $(SRCS))

NAME = moar_brainz

all : $(NAME)

$(NAME) : $(OBJS) Makefile
	$(CXX) $(OBJS) -o $(NAME)

$(OBJS_DIR) :
	mkdir -p $(OBJS_DIR)

$(OBJS_DIR)/%.o : %.cpp | $(OBJS_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean : 
	rm -rf $(OBJS_DIR)

fclean : clean
	rm -f $(NAME)

re : fclean all

tidy:
	clang-tidy $(SRCS) -- -I. -std=c++98

.PHONY : all clean fclean re tidy