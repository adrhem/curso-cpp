#include <iostream>

int main() {

    int a = 10; // 2^16 = 65536 : -32768 a 32767
    unsigned int b = 20; // 2^16 = 65536 : 0 a 65535
    // Busca 10 espacios de memoria para enteros
    int c[10]; // Valores basura
    int d[2] = {}; // Valores en 0
    int e[5] = {1, 2, 3, 4, 5}; // Valores en 0
    int f[5] = {1, 2}; // Valores en 0

    std::cout << "Valor: " << a << std::endl;
    std::cout << "Dirección de memoria: " << &a << std::endl;
    std::cout << "Tamaño: " << sizeof(a) << std::endl;
    std::cout << "Dirección de memoria del arreglo: " << c << std::endl;
    std::cout << "Valor en primer elemento de c: " << c[0] << std::endl;
    std::cout << "Valor en primer elemento de d: " << d[0] << std::endl;
    std::cout << "Valor no existente de d: " << d[2] << std::endl;
    std::cout << "Valor en tercer elemento de e: " << e[2] << std::endl;
    std::cout << "Valores de f: " << f[0] << f[1] << f[2] << f[3] << f[4] << std::endl;

    return 0;
}