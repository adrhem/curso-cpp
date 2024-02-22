#include <iostream>
// #define SIZE_NUM 10 Antigua manera de definir constantes
const int SIZE_NUM = 10; // Es buena practica usar constanstes en mayúsculas

int main() {
    int numeros[SIZE_NUM] = { // Reserva en memoria espacio para 10 enteros
        0,1,2,3,4,5 // Asigna valor a los primeros 6 números
    };

    std::cout << "Imprime los valores iniciales y 0's los demas." << std::endl;
    for(int i = 0; i < SIZE_NUM; i++) {
        std::cout << numeros[i] << std::endl;
    }

    for(int i = 0; i < SIZE_NUM; i++) {
        numeros[i] = i;
    }

    std::cout << "Imprime los valores de 0 a 9." << std::endl;
    for(int i = 0; i < SIZE_NUM ; i++) {
        std::cout << numeros[i] << std::endl;
    }

    // Puede dar pantallazo azul
    // std::cout << "Indice fuera de los reservados:" << numeros[1000];

    return 0;
}
