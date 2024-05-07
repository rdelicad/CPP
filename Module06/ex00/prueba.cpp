#include <cstdlib>
#include <iostream>

int main() {
    const char* str = "3.14159 esto no es un número";
    char* str_end;

    double d = std::strtod(str, &str_end);

    std::cout << "Número convertido: " << d << '\n';
    std::cout << "Parte no convertida: " << str_end << '\n';

    return 0;
}