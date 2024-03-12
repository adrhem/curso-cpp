// Compilar y ejecutar: g++ .\5.ciclos.cpp && .\a.exe
#include <iostream>
using namespace std;

int sqrt(int n);
int pow(int n, int m);

int main() {
    /**
     * for (primer paso; segundo paso; cuarto paso) {
     *   tercer paso
     * }
     * 
     * primer paso: se ejecuta una sola vez
     * segundo paso: condición de salida, se evalkua cada vez que se repite el ciclo
     * tercer paso: se ejecuta cada vez que se repite el ciclo, puede ser una o más instrucciones
     * cuarto paso: se ejecuta al finalizar cada ciclo.
    */

    for (int i = 1; i <= 10; i++) { // i = i + 1
        cout << "El cuadrado de " << i << " es " << sqrt(i) << endl; // paso de parametros por valor
    }

    int j = 1;
    while (j <= 10) {
        cout << "El cubo de " << j << " es " << pow(j, 3) << endl;
        j++;
    }

    int k = 1;
    do {
        cout << k << " a la 0 potencia es " << pow(k, 0) << endl;
        k++;
    } while (k <= 10);

    return 0;
}

int sqrt(int n) {
    return n * n;
}

int pow(int n, int m) { 
    int result = 1;

    for (int i = 0; i < m; i++) {
        result *= n;
    }

    return result;
}