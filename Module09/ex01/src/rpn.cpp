void rpn::calculaterpn()
{
  std::stack<double> stack;
    std::istringstream tokens(expression);
    std::string token;

    while (tokens >> token) {
        // Verificar si el token es un número
        std::istringstream iss(token);
        double number;
        if (iss >> number) {
            stack.push(number); // Empujar número a la pila
        } else {
            // Si el token es un operador, aplicar la operación
            if (stack.size() < 2) {
                throw std::runtime_error("No hay suficientes operandos en la pila.");
            }
            double b = stack.top(); stack.pop();
            double a = stack.top(); stack.pop();

            if (token == "+") {
                stack.push(a + b);
            } else if (token == "-") {
                stack.push(a - b);
            } else if (token == "*") {
                stack.push(a * b);
            } else if (token == "/") {
                if (b == 0) {
                    throw std::runtime_error("División por cero.");
                }
                stack.push(a / b);
            } else {
                throw std::runtime_error("Operador no reconocido: " + token);
            }
        }
    }

    if (stack.size() != 1) {
        throw std::runtime_error("Error en la expresión: demasiados operandos.");
    }

    return stack.top();
}