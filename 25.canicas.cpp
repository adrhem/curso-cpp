#include <iostream>

int main () {
    int numero_vasos, numero_canicas;
    int canicas_por_vaso[1000000] = {};

    std::cin >> numero_vasos >> numero_canicas;

    for(int i = 0; i < numero_canicas; i++) {
      int tiro;
      std::cin >> tiro;
      canicas_por_vaso[tiro - 1]++;
    }

    for(int i = 0; i < numero_vasos; i++) {
      std::cout << canicas_por_vaso[i] << std::endl;
    }

    return 0;
}