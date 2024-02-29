#include <iostream>
#include <vector>

int main() {

    std::vector<int> numeros = {0, 1, 2, 3, 4, 5};

    std::cout << "Vector inicial: " << std::endl;
    for (int i = 0 ; i < numeros.size() ; i++) {
        std::cout << numeros[i] << std::endl;
    }

    numeros.insert(numeros.end(), 6);
    numeros.erase(numeros.begin());
    numeros.insert(numeros.begin(), 7);

    std::cout << "Vector final: " << std::endl;
    for (auto numero : numeros) {
        std::cout << numero << std::endl;
    }

    return 0;
}