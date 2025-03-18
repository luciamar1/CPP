# Nombre del proyecto
NAME = PmergeMe

# Compilador y flags
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

# Archivos fuente y objeto
SRC = main.cpp PmergeMe.cpp
OBJ = $(SRC:.cpp=.o)

# Nombre del ejecutable
EXEC = $(NAME)

# Colores para la salida
RED = \033[0;31m
GREEN = \033[0;32m
YELLOW = \033[0;33m
BLUE = \033[0;34m
RESET = \033[0m

# Objetivo por defecto
all: $(EXEC)

# Regla de compilación del ejecutable
$(EXEC): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(EXEC) $(OBJ)

# Limpiar archivos objeto
clean:
	rm -f $(OBJ)
	@echo "$(YELLOW)Archivos objeto eliminados$(RESET)"

# Limpiar ejecutable y archivos objeto
fclean: clean
	rm -f $(EXEC)
	@echo "$(YELLOW)Ejecutable y archivos objeto eliminados$(RESET)"

# Reconstruir el proyecto
re: fclean all

# Regla para hacer pruebas automáticas
test: $(EXEC)
	@echo "$(BLUE)Ejecutando pruebas...$(RESET)"

	# Prueba 1
	@echo "$(YELLOW)Ejecutando prueba 1: Entrada -> 5 3 9 1 7$(RESET)"
	@./$(EXEC) 5 3 9 1 7 > result.log
	@echo "$(YELLOW)Entrada: 5 3 9 1 7$(RESET)"
	@echo "$(BLUE)Salida del programa:$(RESET)"
	@cat result.log
	@echo "$(BLUE)Salida esperada:$(RESET)"
	@echo "Before: 5 3 9 1 7"
	@echo "After: 1 3 5 7 9"
	@echo ""

	# Verifica si la salida es correcta
	@if grep -q "Before: 5 3 9 1 7" result.log && \
		grep -q "After: 1 3 5 7 9" result.log; then \
			echo "$(GREEN)Prueba 1: OK$(RESET)"; \
		else \
			echo "$(RED)Prueba 1: FALLO$(RESET)"; fi

	# Prueba 2
	@echo "$(YELLOW)Ejecutando prueba 2: Entrada -> 100 50 200 10 150$(RESET)"
	@./$(EXEC) 100 50 200 10 150 > result.log
	@echo "$(YELLOW)Entrada: 100 50 200 10 150$(RESET)"
	@echo "$(BLUE)Salida del programa:$(RESET)"
	@cat result.log
	@echo "$(BLUE)Salida esperada:$(RESET)"
	@echo "Before: 100 50 200 10 150"
	@echo "After: 10 50 100 150 200"
	@echo ""

	# Verifica si la salida es correcta
	@if grep -q "Before: 100 50 200 10 150" result.log && \
		grep -q "After: 10 50 100 150 200" result.log; then \
			echo "$(GREEN)Prueba 2: OK$(RESET)"; \
		else \
			echo "$(RED)Prueba 2: FALLO$(RESET)"; fi

	# Prueba 3
	@echo "$(YELLOW)Ejecutando prueba 3: Entrada -> 500 1000 800 200$(RESET)"
	@./$(EXEC) 500 1000 800 200 > result.log
	@echo "$(YELLOW)Entrada: 500 1000 800 200$(RESET)"
	@echo "$(BLUE)Salida del programa:$(RESET)"
	@cat result.log
	@echo "$(BLUE)Salida esperada:$(RESET)"
	@echo "Before: 500 1000 800 200"
	@echo "After: 200 500 800 1000"
	@echo ""

	# Verifica si la salida es correcta
	@if grep -q "Before: 500 1000 800 200" result.log && \
		grep -q "After: 200 500 800 1000" result.log; then \
			echo "$(GREEN)Prueba 3: OK$(RESET)"; \
		else \
			echo "$(RED)Prueba 3: FALLO$(RESET)"; fi

# Objetos de pruebas y limpieza de objetos
.PHONY: all clean fclean re test
