#include <iostream>
#include <cstring>

int main () {
    // 18:00 19:00
    // 23:10 6:30 -> 1390, 390 + 1440 = 1830
    char entrada1[6], entrada2[6];
    int minutos_iniciales, minutos_finales;
    int minutos_diferencia;

    std::cin >> entrada1 >> entrada2;

    minutos_iniciales 
        = atoi(strtok(entrada1, ":")) * 60
            + atoi(strtok(NULL, ":"));

    minutos_finales
        = atoi(strtok(entrada2, ":")) * 60
            + atoi(strtok(NULL, ":"));

    
    if (minutos_finales < minutos_iniciales) {
        minutos_finales += 24 * 60; // Se suman 24 horas en minutos
    }

    minutos_diferencia = minutos_finales - minutos_iniciales;

    std::cout << "Minutos diferencia: " << minutos_diferencia << std::endl;

    return 0;
}
