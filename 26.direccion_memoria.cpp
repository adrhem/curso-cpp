#include <iostream>

int main () {
    
    int a;
    long long int b = 10;
    int c[10] = {10};

    std::cout << "Tamaño de a: " << sizeof(a) << std::endl;
    std::cout << "Valor de a: " << a << std::endl;
    std::cout << "Dirección de a: " << &a << std::endl;
    std::cout << "Tamaño de b: " << sizeof(b) << std::endl;
    std::cout << "Valor de b: " << b << std::endl;
    std::cout << "Dirección de b: " << &b << std::endl;
    std::cout << "Tamaño de c: " << sizeof(c) << std::endl;
    std::cout << "Valor de c: " << c << std::endl;
    std::cout << "Dirección de c: " << &c << std::endl;
    std::cout << "Primer valor de c: " << c[0] << std::endl;
    std::cout << "Dirección del primer valor de c: " << &c[0] << std::endl;
    std::cout << "Segundo valor de c: " << c[1] << std::endl;
    std::cout << "Dirección del segundo valor de c: " << &c[1] << std::endl;
    std::cout << "Ultimo valor de c: " << c[9] << std::endl;
    std::cout << "Dirección del ultimo valor de c: " << &c[9] << std::endl;

    return 0;
}