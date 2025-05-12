NAME		=	moar_brainz
CXX		=	c++
42_FLAGS	=	-Wall -Wextra -Werror -Wpedantic -std=c++98
DEBUG_FLAG	=	-g3
INC_FLAGS	=	-Iinclude
CXXFLAGS		=	$(42_FLAGS)
CXXFLAGS		+=	$(DEBUG_FLAG)
CXXFLAGS		+=	$(INC_FLAGS)

BUI_DIR		=	build/
INC_DIR		=	include/
SRC_DIR		=	src/

SRC_FIL		=	\
				main \
				Zombie \
				zombieHorde

SRC			=	$(addprefix $(SRC_DIR), $(addsuffix .cpp, $(SRC_FIL)))
OBJ			=	$(addprefix $(BUI_DIR), $(addsuffix .o, $(SRC_FIL)))
OBJF		=	.cache_exists

all: $(NAME)

$(NAME): $(OBJ)
	@echo "Linking $@..."
	@$(CXX) $(OBJ) -o $(NAME)
	@echo "$(NAME) executable is ready! :D"

$(BUI_DIR)%.o: $(SRC_DIR)%.cpp | $(OBJF)
	@mkdir -p $(dir $@)
	@echo "Compiling $<..."
	@$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJF):
	@touch $(OBJF)

.clangd: Makefile
	@echo "Making clangd configuration file"
	@echo -n																\
	"CompileFlags:\n"														\
	"  Compiler: clang\n"													\
	"  Add:\n"																\
	"    - \"-Wall -Wextra -Werror\"\n"										\
	"    - \""$(42_FLAGS)"\"\n"	> .clangd
	@for file in $(INC_DIR); do												\
		echo "     - \"-I"$(shell pwd)"/"$$file"\"" >> .clangd;				\
	done ;
	@echo $(GREEN) "Done" $(RESET)

clean:
	@echo "Removing build files..."
	@rm -rf $(BUI_DIR) $(OBJF)

fclean: clean
	@echo "Removing $(NAME)..."
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
