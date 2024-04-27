#include <iostream>

int char_to_int(char entrada);

int main () {
    // 18:00 19:00
    // 23:10 06:30 -> 1390, 390 + 1440 = 1830
    char entrada1[6], entrada2[6];
    int minutos_iniciales, minutos_finales;
    int minutos_diferencia;

    std::cin >> entrada1 >> entrada2;

    minutos_iniciales 
        = (char_to_int(entrada1[0]) * 10 + char_to_int(entrada1[1])) * 60
            + char_to_int(entrada1[3]) * 10 + char_to_int(entrada1[4]);

    minutos_finales
        = (char_to_int(entrada2[0]) * 10 + char_to_int(entrada2[1])) * 60
            + char_to_int(entrada2[3]) * 10 + char_to_int(entrada2[4]);

    
    if (minutos_finales < minutos_iniciales) {
        minutos_finales += 24 * 60; // Se suman 24 horas en minutos
    }

    minutos_diferencia = minutos_finales - minutos_iniciales;

    std::cout << "Minutos diferencia: " << minutos_diferencia << std::endl;

    return 0;
}

int char_to_int(char entrada) {
    return entrada - '0';
}
