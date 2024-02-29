#include <iostream>

int main() {

    char a = 'a'; // 0 -> 255 2^8 = 256
    std::string b = "Roberto";
    char c[8] = "Roberto";
    // Primer valor es filas, segundo valor es tamaño de cadenas
    char d[5] = "abc";
    char e[4] = {97, 98, 99};
    std::cout << "Valor de a: " << a << std::endl;
    std::cout << "Valor de b: " << b << std::endl;
    std::cout << "Valor de c: " << c << std::endl;
    std::cout << "Tama" << (char)164 << "o de dato char: " << sizeof(a) << std::endl;

    // Tabla de equivalencias de ASCII
    // for (int i = 0  ; i <= 255 ; i++ ) {
    //     // Casting o casteo
    //     std::cout << "Valor de " << i << " es la letra " << (char)i << std::endl;
    // }

    std::cout << "Valor de d: " << d << std::endl;
    std::cout << "Valor de d en ultima posición: " << d[4] << std::endl;
    std::cout << "Valor de d en penultima posición: " << d[3] << std::endl;
    std::cout << "Valor de b es: " << b << std::endl;
    std::cout << "Valor de b en primer posición es: " << b[0] << std::endl;
    std::cout << "Valor de e es: " << e << std::endl;

    return 0;
}