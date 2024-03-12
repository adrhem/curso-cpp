#include <iostream>

int main() {

    int lado = 5;
    std::string figura = "*";
    
    /**
        Imprimir un triángulo rectangulo usando la variable lado.

        Salida: (5)
        *
        **
        ***
        ****
        ***** 
    */
    for (int i = 0; i < lado ; i++) {
        for (int j = 0; j <= i ; j++) {
            // std::cout << "i:" << i << " j:" << j << std::endl;
            std::cout << figura;
        }
        std::cout << std::endl;
    }

    return 0;
}
