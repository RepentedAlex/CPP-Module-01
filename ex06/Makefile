NAME		=	harlFilter
CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98
CXXFLAGS	+=	-g3
CXXFLAGS	+=	-Iinclude

BUI_DIR		=	build/
INC_DIR		=	include/
SRC_DIR		=	src/

SRC_FIL		=	\
				main \
				Harl

SRC			=	$(addprefix $(SRC_DIR), $(addsuffix .cpp, $(SRC_FIL)))
OBJ			=	$(addprefix $(BUI_DIR), $(addsuffix .o, $(SRC_FIL)))
OBJF		=	.cache_exists

all: $(NAME)

$(NAME): $(OBJ)
	@echo "Linking $<..."
	@$(CXX) $(OBJ) -o $(NAME)

$(BUI_DIR)%.o: $(SRC_DIR)%.cpp | $(OBJF)
	@mkdir -p $(dir $@)
	@echo "Compiling $<..."
	@$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJF):
	@touch $(OBJF)

clean:
	@echo "Removing build files..."
	@rm -rf $(BUI_DIR) $(OBJF)

fclean: clean
	@echo "Removing $(NAME)..."
	@rm -rf $(NAME)

re: fclean all

BLUE	=	\033[0;34m
BLACK	=	\033[0;30m
ORANGE	=	\033[0;33m
WHITE	=	\033[1;37m
RESET	=	\033[0m

print_sonic:
	@echo "$(BLUE)"
	@echo "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣤⣤⣤⣤⣄⣀⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢻⣿⣿⣿⣿⣿⣿⣿⣷⣶⣤⣄⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠹⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣤⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⡀⠀⠘⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣤⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "⠀⠀⠀⠀⠀⠀⣀⣤⣶⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "⠀⠀⠀⣠⣶⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "⠀⣠⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣆⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "⠘⠛⠿⠿⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣆⠀⠀⠀⠀⠀⠀⠀"
	@echo "⠀⠀⠀⠀⠀⠀⠉⠙⠻⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⠿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡄⠀⠀⠀⠀⠀⠀"
	@echo "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣙⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠏⠀⠀⠀⠀⠙⣿⣿⣿⣿⣿⣿⣿⣿⣿⣧⣤⣤⣤⣤⣀⡀"
	@echo "⠀⠀⠀⠀⠀⠀⠀⢀⣴⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡏⠀⠀⠀$(RESET)⢀⡀⠀$(BLUE)⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠁"
	@echo "⠀⠀⠀⠀⠀⠀⣰⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀$(RESET)⢀⣾⣿⠃⠀$(BLUE)⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠋⠀⠀"
	@echo "⠀⠀⠀⠀⠀⣼⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣧$(RESET)⣠⣿⡿⠃⠀⠀$(BLUE)⢸⣿⣿⣿⣿⣿⣿⣿⢿⣿⣿⠋⠀⠀⠀⠀"
	@echo "⠀⠀⠀⠀⣼⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿$(ORANGE)⣿⣿⣿$(WHITE)⣿⣿⣿$(ORANGE)⣿⣿⣅⠀⠀⠀⠀$(BLUE)⠘⣿⣿⣿⣿⣿⠛⢡⣾⠟⠁⠀⠀⠀⠀⠀"
	@echo "⠀⠀⠀⢰⣿⣿⣿⣿⣿⠿⠟⠛⠋⠉⠉⠉⠉$(ORANGE)⠉⠉⠙⢿$(WHITE)⣿⣿⣿$(ORANGE)⣿⣿⣶⣶⣤⣤$(BLUE)⣝⣻⣿⡿⢃⠴⠋⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "⠀⠀⠀⣿⡿⠟⠋⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀$(ORANGE)⠈⠛⠿$(WHITE)⣿⣿$(ORANGE)⣿⣿⣿⣿⣿⣿⣥⣒$(BLUE)⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "⠀⠀⠀⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀$(ORANGE)⠉⠙⠛⠛⠛⠋$(BLACK)⠙⠻⠿⠿⠂⠀⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "$(RESET)"
