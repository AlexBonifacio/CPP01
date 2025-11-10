
CXX = c++
CXXFLAGS = -Werror -Wextra -Wall -pedantic -std=c++98

SRCS = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
OBJS = $(patsubst %.cpp,obj/%.o,$(SRCS))
OBJS_DIR = obj

NAME = BraiiiiiiinnnzzzZ

all: $(NAME)

$(NAME) : $(OBJS) Makefile
	$(CXX) $(OBJS) -o $(NAME)

$(OBJS_DIR) :
	mkdir -p $(OBJS_DIR)

$(OBJS_DIR)/%.o : %.cpp | $(OBJS_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@ 

clean :
	rm -rf $(OBJ_DIR)

fclean : clean
	rm -f $(NAME)

re : fclean all

tidy:
	clang-tidy $(SRCS) -- -I. -std=c++98

.PHONY : all clean fclean re tidy