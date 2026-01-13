# * Colors
GREEN = \033[0;32m
YELLOW = \033[0;33m
RED = \033[0;31m
RESET = \033[0m

# * Program name
NAME = unnecessary_violence

# * Compilation
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -g3
CFLAGS += -fsanitize=address

# * Removal
RM = rm -rf

# * Includes
INCLUDES = -I ./inc/

# * Objects dir
OBJ_DIR = ./obj/

# * Sources files
UNNECESSARY_VIOLENCE_DIR = ./src/
UNNECESSARY_VIOLENCE_SRCS = 	HumanA.cpp \
								HumanB.cpp \
								main.cpp \
								Weapon.cpp

SRCS = $(UNNECESSARY_VIOLENCE_SRCS)

# * Object files
OBJS = $(addprefix $(OBJ_DIR), $(SRCS:.cpp=.o))

# ! RULES
$(OBJ_DIR)%.o: $(UNNECESSARY_VIOLENCE_DIR)%.cpp
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(NAME): $(OBJS)
	@echo "$(GREEN)Compiling $(NAME)...$(RESET)"
	@$(CC) $(CFLAGS) $(INCLUDES) $(OBJS) -o $(NAME)

all: obj $(NAME)

obj:
	@mkdir -p $(OBJ_DIR)

clean:
	@echo "$(RED)Removing object files...$(RESET)"
	@$(RM) $(OBJS)

fclean: clean
	@echo "$(RED)Removing $(NAME)...$(RESET)"
	@$(RM) $(NAME)

re:
	@echo "$(YELLOW)Rebuilding $(NAME)$(RESET)"
	@$(MAKE) --no-print-directory fclean all

run: all
	clear
	./$(NAME)

.PHONY: all obj clean fclean re run

.DEFAULT_GOAL: all
