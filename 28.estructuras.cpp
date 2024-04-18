#include <iostream>
#include <cstring>

struct Auto {
    char placas[10];
    std::string marca;
};

// Paso por valor
void imprimirAuto(Auto automovil);
// Paso por referencia
void capturaAuto(int numero, Auto *automovil);

int main () {
    
    Auto *autos;
    Auto auto1;

    int n_autos;
    std::cout << "Número de autos: ";
    std::cin >> n_autos;

    autos = new Auto[n_autos];

    for (int i = 0; i < n_autos; i++) {
        std::cout << "Dirección de memoria de auto " << i + 1 << ": " << &autos[i] << std::endl;
        capturaAuto(i + 1, &autos[i]);
    }

    for (int i = 0; i < n_autos; i++) {
        imprimirAuto(autos[i]);
    }

    free(autos);

    return 0;
}

void imprimirAuto(Auto automovil) {
    // Punto para atributo por paso por valor
    std::cout << "Placas: " << automovil.placas << std::endl; 
    std::cout << "Marca: " << automovil.marca << std::endl;
}

void capturaAuto(int numero, Auto *automovil) {
    std::cout << "Dirección de memoria de auto " << numero << ": " << automovil << std::endl;
    std::cout << "Placas del auto " << numero << ": ";
    // Flecha se usa para apuntadores paso por referencia
    std::cin >> automovil->placas;
    std::cout << "Marca del auto " << numero << ": ";
    std::cin >> automovil->marca;
}