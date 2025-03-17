NAME = RPN
SRC = main.cpp RPN.cpp
OBJ = $(SRC:.cpp=.o)
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

# Colores para terminal
RESET = \033[0m
RED = \033[31m
GREEN = \033[32m
YELLOW = \033[33m
BLUE = \033[34m
CYAN = \033[36m
WHITE = \033[37m

# Regla principal para compilar el programa
all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

clean:
	@echo "$(YELLOW)Cleaning object files...$(RESET)"
	rm -f $(OBJ)

fclean: clean
	@echo "$(YELLOW)Cleaning binary...$(RESET)"
	rm -f $(NAME)

re: fclean all

# Regla para ejecutar pruebas
test: $(NAME)
	@echo "$(CYAN)Running tests...$(RESET)"

	# Prueba 1: Evaluación simple
	@echo "$(GREEN)Test 1: 8 9 * 9 - 9 - 9 - 4 - 1 +$(RESET)"
	@result1=$$(./RPN "8 9 * 9 - 9 - 9 - 4 - 1 +" 2>&1); \
	echo "$(EXPECTED_COLOR)Expected: 42$(RESET)"; \
	echo "$(RESULT_COLOR)Result: $$result1$(RESET)"; \
	if [ "$$result1" = "42" ]; then \
		echo "$(GREEN)Test 1 passed$(RESET)"; \
	else \
		echo "$(RED)Test 1 failed$(RESET)"; \
	fi
	@echo ""  # Salto de línea

	# Prueba 2: Evaluación de fórmula más compleja
	@echo "$(GREEN)Test 2: 9 8 * 4 * 4 / 2 + 9 - 8 - 8 - 1 - 6 -$(RESET)"
	@result2=$$(./RPN "9 8 * 4 * 4 / 2 + 9 - 8 - 8 - 1 - 6 -" 2>&1); \
	echo "$(EXPECTED_COLOR)Expected: 42$(RESET)"; \
	echo "$(RESULT_COLOR)Result: $$result2$(RESET)"; \
	if [ "$$result2" = "42" ]; then \
		echo "$(GREEN)Test 2 passed$(RESET)"; \
	else \
		echo "$(RED)Test 2 failed$(RESET)"; \
	fi
	@echo ""  # Salto de línea

	# Prueba 3: Expresión con múltiples operaciones
	@echo "$(GREEN)Test 3: 1 2 * 2 / 2 + 5 * 6 - 1 3 * - 4 5 * * 8 /$(RESET)"
	@result3=$$(./RPN "1 2 * 2 / 2 + 5 * 6 - 1 3 * - 4 5 * * 8 /" 2>&1); \
	echo "$(EXPECTED_COLOR)Expected: 15$(RESET)"; \
	echo "$(RESULT_COLOR)Result: $$result3$(RESET)"; \
	if [ "$$result3" = "15" ]; then \
		echo "$(GREEN)Test 3 passed$(RESET)"; \
	else \
		echo "$(RED)Test 3 failed$(RESET)"; \
	fi
	@echo ""  # Salto de línea

	# Prueba 4: Operación con números negativos (si fuera permitido en tu proyecto)
	@echo "$(GREEN)Test 4: 3 4 -$(RESET)"
	@result4=$$(./RPN "3 4 -" 2>&1); \
	echo "$(EXPECTED_COLOR)Expected: -1$(RESET)"; \
	echo "$(RESULT_COLOR)Result: $$result4$(RESET)"; \
	if [ "$$result4" = "-1" ]; then \
		echo "$(GREEN)Test 4 passed$(RESET)"; \
	else \
		echo "$(RED)Test 4 failed$(RESET)"; \
	fi
	@echo ""  # Salto de línea

	# Prueba 5: Dividir por cero
	@echo "$(GREEN)Test 5: 3 0 /$(RESET)"
	@result5=$$(./RPN "3 0 /" 2>&1); \
	echo "$(EXPECTED_COLOR)Expected: Error: Division by zero.$(RESET)"; \
	echo "$(RESULT_COLOR)Result: $$result5$(RESET)"; \
	if [ "$$result5" = "Error: Division by zero." ]; then \
		echo "$(GREEN)Test 5 passed$(RESET)"; \
	else \
		echo "$(RED)Test 5 failed$(RESET)"; \
	fi
	@echo ""  # Salto de línea

	# Prueba 6: Expresión incorrecta (menos de dos operandos)
	@echo "$(GREEN)Test 6: 8 *$(RESET)"
	@result6=$$(./RPN "8 *" 2>&1); \
	echo "$(EXPECTED_COLOR)Expected: Error: Not enough operands.$(RESET)"; \
	echo "$(RESULT_COLOR)Result: $$result6$(RESET)"; \
	if [ "$$result6" = "Error: Not enough operands." ]; then \
		echo "$(GREEN)Test 6 passed$(RESET)"; \
	else \
		echo "$(RED)Test 6 failed$(RESET)"; \
	fi
	@echo ""  # Salto de línea

	# Prueba 7: Expresión con un token inválido
	@echo "$(GREEN)Test 7: 8 9 &$(RESET)"
	@result7=$$(./RPN "8 9 &" 2>&1); \
	echo "$(EXPECTED_COLOR)Expected: Error: Invalid token '&'.$(RESET)"; \
	echo "$(RESULT_COLOR)Result: $$result7$(RESET)"; \
	if [ "$$result7" = "Error: Invalid token '&'." ]; then \
		echo "$(GREEN)Test 7 passed$(RESET)"; \
	else \
		echo "$(RED)Test 7 failed$(RESET)"; \
	fi
	@echo ""  # Salto de línea

	# Prueba 8: Expresión mal formada (más de un valor en el stack al final)
	@echo "$(GREEN)Test 8: 8 9 + 9 +$(RESET)"
	@result8=$$(./RPN "8 9 + 9 +" 2>&1); \
	echo "$(EXPECTED_COLOR)Expected: Error: Malformed expression.$(RESET)"; \
	echo "$(RESULT_COLOR)Result: $$result8$(RESET)"; \
	if [ "$$result8" = "Error: Malformed expression." ]; then \
		echo "$(GREEN)Test 8 passed$(RESET)"; \
	else \
		echo "$(RED)Test 8 failed$(RESET)"; \
	fi
	@echo ""  # Salto de línea

.PHONY: all clean fclean re test
