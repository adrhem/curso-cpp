#include <iostream>

int main() {

    int filas, columnas;
    std::string figura = "\\*";

    std::cin >> filas >> columnas; // 2 5

    /*
     \*\*\*\*\*
     \*\*\*\*\*
    */
    // j = 0;
    // do {
    //     i = 0;
    //     do {
    //         std::cout << figura;
    //         i ++;
    //     } while (i < columnas);
    //     std::cout << std::endl;
    //     j++;

    // } while (j < filas);

    for (int j = 0; j < filas ; j++) {
        for (int i = 0; i < columnas ; i++) {
            std::cout << figura;
        }
        std::cout << std::endl;
    }

    return 0;
}