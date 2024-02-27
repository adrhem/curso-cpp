#include <iostream>
#include <iomanip>
#include <string>

// Pedir la Cantidad de alumnos y las "n" calificaciones. 
// Mostrar el promedio con dos decimales.
// 4 -> Cantidad de alumnos / calificaciones
// 50 100 100 50 -> Califaciones
// Salida debe ser 75.00

int main(int argc, char* argv[]) {

    /*
    // .\a.exe adrian roberto otro nombre
     
        std::cout << argc << std::endl; -> 5 argumentos

        for(int i = 0 ; i < argc ; i++) {
            std::cout << argv[i] << std::endl; -> imprime argumentos
        }
    */
    
    int numero_alumnos = std::stoi(argv[1]); // 1 porque 0 tiene ubicación del programa
    int suma = 0;

    for (int i = 0 ; i < numero_alumnos ; i++ ) {
        // Empezamos a leer calificaciones desde el 2 parámetro 
        // sin contar la ubicación del programa
        suma += std::stoi(argv[2 + i]);
    }

    std::cout << std::fixed << std::setprecision(2) << (float)suma / numero_alumnos;

    return 0;
}