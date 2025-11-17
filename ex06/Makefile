
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic -MMD -MP

OBJ_DIR = obj
SRCS = main.cpp Harl.cpp
OBJS = $(patsubst %.cpp, $(OBJ_DIR)/%.o, $(SRCS))
DEP = $(OBJS:%.o=%.d)

NAME = harlFiler

all : $(NAME)

$(NAME) : $(OBJS) Makefile
	$(CXX) $(OBJS) -o $(NAME)

$(OBJ_DIR) :
	mkdir -p obj

$(OBJ_DIR)/%.o : %.cpp | $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean : 
	rm -f $(NAME)

fclean : clean
	rm -rf $(OBJ_DIR)

re : fclean all

.PHONY : all clean fclean re

-include $(DEP)