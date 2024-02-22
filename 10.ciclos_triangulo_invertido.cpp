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
        for (int j = 0; j <= lado ; j++) {
            // if (j < lado - i) {
            //     std::cout << " ";
            // } else {
            //     std::cout << figura;
            // }
            std::cout << (j < lado - i ? " " : figura);
        }
        std::cout << std::endl;
    }

    return 0;
}
