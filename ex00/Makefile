NAME 					= Megaphone

# Archivos fuente
SRC_DIR					= ./
SRC						= megaphone.cpp

# Archivos objeto
OBJ_DIR					= ./
OBJ						= $(SRC:.cpp=.o)

# flags
CC 						= c++
CFLAGS 					= -c -Wall -Wextra -Werror -std=c++98 -pedantic

# implicit rules
$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp 
	$(CC) $(CFLAGS) $< -o $(@)

# rules
.PHONY: clean fclean re all

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all