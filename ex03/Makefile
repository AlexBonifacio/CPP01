
CXX = c++
CXXFLAGS = -Werror -Wextra -Wall -pedantic -std=c++98 -MMD -MP

SRCS = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
OBJ_DIR = obj
OBJS = $(patsubst %.cpp, obj/%.o, $(SRCS))
DEP = $(OBJS:.o=.d)

NAME = uv

all : $(NAME)

$(NAME) : $(OBJS) Makefile
	$(CXX) $(OBJS) -o $(NAME)

$(OBJ_DIR) :
	mkdir -p obj

$(OBJ_DIR)/%.o : %.cpp | $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean :
	rm -rf $(OBJ_DIR)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re

-include $(DEP)