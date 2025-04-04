NAME		=	brainz
COMPILO		=	c++
42_FLAGS	=	-Wall -Wextra -Werror -Wpedantic -std=c++98
DEBUG_FLAG	=	-g3
INC_FLAGS	=	-Iinclude
FLAGS		=	$(42_FLAGS)
FLAGS		+=	$(DEBUG_FLAG)
FLAGS		+=	$(INC_FLAGS)

BUI_DIR		=	build/
INC_DIR		=	include/
SRC_DIR		=	src/

SRC_FIL		=	\
				main \
				newZombie \
				randomChump \
				zombie

SRC			=	$(addprefix $(SRC_DIR), $(addsuffix .cpp, $(SRC_FIL)))
OBJ			=	$(addprefix $(BUI_DIR), $(addsuffix .o, $(SRC_FIL)))
OBJF		=	.cache_exists

all: $(NAME)

$(NAME): $(OBJ)
	@echo "Linking $<..."
	@$(COMPILO) $(OBJ) -o $(NAME)

$(BUI_DIR)%.o: $(SRC_DIR)%.cpp | $(OBJF)
	@mkdir -p $(dir $@)
	@echo "Compiling $<..."
	@$(COMPILO) $(FLAGS) -c $< -o $@

$(OBJF):
	@touch $(OBJF)

clean:
	@echo "Removing build files..."
	@rm -rf $(BUI_DIR) $(OBJF)

fclean: clean
	@echo "Removing $(NAME)..."
	@rm -rf $(NAME)

re: fclean all
