#include <iostream>

int main () {
    
    int n_calificaciones;
    float *calificaciones;
    float promedio = 0;

    std::cin >> n_calificaciones;
    std::cout << "Dirección de calificaciones: " << &calificaciones << std::endl;   
    std::cout << "Tamano de reservado: " << n_calificaciones * sizeof(float) << std::endl;
    calificaciones = new float[n_calificaciones];
    // calificaciones = (float *) malloc(n_calificaciones * sizeof(int));

    for (int i = 0; i < n_calificaciones; i++) {
        std::cin >> calificaciones[i];
        promedio += calificaciones[i];
    }

    promedio /= n_calificaciones;

    std::cout << "Promedio: " << promedio;

    free(calificaciones);

    return 0;
}