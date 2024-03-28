#include <iostream>

int main() {
    int numero_hijas;
    int monedas_sobrantes;
    int monedas_por_hija_maximas, monedas_por_hija_minimas, monedas_sobrantes_restantes;

    std::cin >> numero_hijas >> monedas_sobrantes;

    monedas_por_hija_maximas = monedas_por_hija_minimas = monedas_sobrantes + monedas_sobrantes / (numero_hijas - 1);
    monedas_sobrantes_restantes = monedas_sobrantes % (numero_hijas - 1);

    if(monedas_sobrantes_restantes == 0) {
        monedas_por_hija_minimas --;
    }

    std::cout << monedas_por_hija_minimas << " " << monedas_por_hija_maximas << std::endl;

    return 0;
}