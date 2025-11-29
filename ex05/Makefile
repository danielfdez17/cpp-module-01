# * Program name
NAME = harl

# * Compilation
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -g
CFLAGS += -fsanitize=address

# * Removal
RM = rm -rf

# * Includes
INCLUDES = -I ./inc/

# * Objects dir
OBJ_DIR = ./obj/

# * Sources files
HARL_DIR = ./src/
HARL_SRCS = 	Harl.cpp \
				main.cpp

SRCS = $(HARL_SRCS)

# * Object files
OBJS = $(addprefix $(OBJ_DIR), $(SRCS:.cpp=.o))

# ! RULES
$(OBJ_DIR)%.o: $(HARL_DIR)%.cpp
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(NAME): $(OBJS)
	@echo "Compiling $(NAME)..."
	@$(CC) $(CFLAGS) $(INCLUDES) $(OBJS) -o $(NAME)

all: obj $(NAME)

obj:
	clear
	@mkdir -p $(OBJ_DIR)

clean:
	@echo "Removing object files..."
	@$(RM) $(OBJS)

fclean: clean
	@echo "Removing $(NAME)..."
	@$(RM) $(NAME)

re: fclean all
	@echo "Rebuilding $(NAME)"

.PHONY: all obj clean fclean re

.DEFAULT_GOAL: all
