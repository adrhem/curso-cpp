#include <iostream>

int formula_uno(int n, int paso);

int main () {
    
    int n;
    int paso = 0;
    std::cin >> n;

    std::cout << formula_uno(n, paso);

    return 0;
}

int formula_uno(int n, int paso) {
    paso++;
    std::cout << "Paso " << paso << ": " << n << std::endl;
    if (n <= 5) {
        return 1;
    } else {
        return formula_uno(n - 2, paso) * 5;
    }

}