#include <iostream>
#include <vector>
#include <string>
const int CANTIDAD_TIROS = 3;

// Tenemos que retornar para que no se pierda la referencia y guarde valores
std::vector<int> pedirDatos(std::vector<int> nuevo); 
void imprimeTiros(std::vector<int> a); // Paso de parámetros
void calcularGanador(std::vector<int> jugador1, std::vector<int> jugador2);

int main() {


    std::vector<int> jugador1 = std::vector<int>(CANTIDAD_TIROS);
    std::vector<int> jugador2 = std::vector<int>(CANTIDAD_TIROS);

    std::cout << "Ingresa las puntuaciones de tiro del jugador 1:" << std::endl;
    jugador1 = pedirDatos(jugador1);

    std::cout << "Ingresa las puntuaciones de tiro del jugador 2:" << std::endl;
    jugador2 = pedirDatos(jugador2);

    calcularGanador(jugador1, jugador2);
    
    return 0;
}

std::vector<int> pedirDatos(std::vector<int> nuevo) {
    std::string color;
    for (int i = 1 ; i <= CANTIDAD_TIROS; i++) {
        std::cout << "Color de ronda " << i << ":";
        // std::cin >> nuevo[i-1];
        
        // Pedir cadena (string) del color y dependiendo del color
        // asignar valor específico
        // No hace falta validar colores no existentes.
        /**
            amarillo 10 
            rojo 8
            azul 6
            negro 3
            afuera 0
        */
    }
    
    return nuevo;
}

void imprimeTiros(std::vector<int> a) {
    for (auto x: a) {
        std::cout << x << ", ";
    }
}

void calcularGanador(std::vector<int> jugador1, std::vector<int> jugador2) {
    int total_jugador_1 = 0, total_jugador_2 = 0;

    for (int i = 0 ; i < CANTIDAD_TIROS; i++) {
        total_jugador_1 += jugador1[i];
        total_jugador_2 += jugador2[i];
    }
    
    if (total_jugador_1 > total_jugador_2) {
        std::cout << "El ganador es el jugador 1" << std::endl;
    } else if (total_jugador_1 < total_jugador_2) {
        std::cout << "El ganador es el jugador 2" << std::endl;
    } else {
        std::cout << "Empate" << std::endl;
    }
}