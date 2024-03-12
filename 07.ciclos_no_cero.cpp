#include <iostream>

int main() {

    int input, total = 0; // Importante inicializar cuando se sume, por ejemplo.

    do {
        std::cin >> input; // Hasta un enter o espacio
        total += input;
    } while (input != 0);

    std::cout << total;

    return 0;
}