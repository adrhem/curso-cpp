#include <iostream>
#include <cstdlib>

// Prototipos de funciones
// Solo declaración de la función, sin implementar.
void imprimeMenu();
void calculaAreaCuadradoORectangulo();
void calculaAreaTriangulo();
void calculaAreaCirculo();

int main() {

    std::string opcion;

    do {
        // imprime_menu(); // Snake case
        imprimeMenu(); // Camel case
        std::getline(std::cin, opcion);

        if (opcion != "s") {
            if (opcion == "1") {
                calculaAreaCuadradoORectangulo();
            } else if (opcion == "2") {
                calculaAreaTriangulo();
            } else if (opcion == "3") {
                calculaAreaCirculo();
            } else {
                std::cout << "Esa opcion no existe." << std::endl;
            }
            system("pause");
        }

        system("cls");

    } while (opcion != "s");

    return 0;
}

void imprimeMenu() {
    std::cout << "<<< CALCULADORA 3000 >>>" << std::endl;
    std::cout << "Elije el area de la figura a calcular." << std::endl;
    std::cout << "1. Cuadrado / Rectangulo" << std::endl;
    std::cout << "2. Triangulo" << std::endl; 
    std::cout << "3. Circulo" << std::endl; 
    std::cout << "s. Para salir" << std::endl; 
}

void calculaAreaCuadradoORectangulo() {
    float base, altura;
    std::cout << "Dame la base del cudrado/rectangulo: ";
    std::cin >> base;
    std::cout << "Dame la altura del cudrado/rectangulo: ";
    std::cin >> altura;
    std::cout << "El area del cuadrado/rectangulo es:" << base * altura << std::endl; 
    
    // Limpiar el buffer y evita que te pida doble presiona tecla para continuar.
    std::cin.clear();
    fflush(stdin);
}

void calculaAreaTriangulo() {
    float base, altura;
    std::cout << "Dame la base del triangulo: ";
    std::cin >> base;
    std::cout << "Dame la altura del triangulo: ";
    std::cin >> altura;
    std::cout << "El area del triangulo es:" << base * altura / 2 << std::endl;

    // Limpiar el buffer y evita que te pida doble presiona tecla para continuar.
    std::cin.clear();
    fflush(stdin);
}

void calculaAreaCirculo() {
    float radio;
    std::cout << "Dame el radio del circulo: ";
    std::cin >> radio;
    std::cout << "El area del circulo es:" << 3.1416 * radio * radio << std::endl; 

    // Limpiar el buffer y evita que te pida doble presiona tecla para continuar.
    std::cin.clear();
    fflush(stdin);
}