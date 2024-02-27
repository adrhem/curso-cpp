#include <iostream>
#include <iomanip>

// Pedir la Cantidad de alumnos y las "n" calificaciones. 
// Mostrar el promedio con dos decimales.
// 4 -> Cantidad de alumnos / calificaciones
// 50 100 100 50 -> Califaciones
// Salida debe ser 75.00

int main() {
    
    int numero_alumnos;
    int calificacion;
    int suma = 0;

    std::cin >> numero_alumnos;

    for (int i = 0 ; i < numero_alumnos ; i++ ) {
       // Se va a repetir la cantidad de veces que tenga numero_alumnos
       std::cin >> calificacion;

       suma += calificacion;
    }

    //printf("%.2f", (float)suma / numero_alumnos); // Casting o casteo
    std::cout << std::fixed << std::setprecision(2) << (float)suma / numero_alumnos;

    return 0;
}