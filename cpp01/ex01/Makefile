# Nombre del programa
NAME       := Horde

# Archivos fuente
SRC_DIR    := .
SRC_NAME   := main.cpp  zombieHorde.cpp Zombie.cpp
# Librerias
HEAD_DIR   := .
HEAD_NAME  :=  Zombie.hpp 

# Directorio de los archivos objeto
OBJ_DIR    := .
# Generación de nombres de archivos objeto a partir de los nombres de archivos fuente
OBJ        := $(addprefix $(OBJ_DIR)/,$(SRC_NAME:.cpp=.o))

# Rutas completas a los archivos fuente y de encabezado
SRC        := $(addprefix $(SRC_DIR)/,$(SRC_NAME))
HEAD       := $(addprefix $(HEAD_DIR)/,$(HEAD_NAME))

# Compilador y opciones de compilación
CC         := c++
CFLAGS     := -c -Wall -Wextra -Werror -std=c++98 -pedantic -I$(HEAD_DIR)

# Regla implícita para compilar archivos fuente en archivos objeto
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp $(HEAD)
	$(CC) $(CFLAGS) $< -o $@

# Objetivos PHONY: clean, fclean, re y all
.PHONY: clean fclean re all

# Objetivo por defecto: compilar el programa
all: $(NAME)

# Regla para compilar el programa final
$(NAME): $(OBJ)
	$(CC) $(OBJ)  -o $(NAME)

# Regla para limpiar los archivos objeto
clean:
	rm -f $(OBJ)

# Regla para limpiar los archivos objeto y el programa final
fclean: clean
	rm -f $(NAME)

# Regla para reconstruir el programa
re: fclean all

