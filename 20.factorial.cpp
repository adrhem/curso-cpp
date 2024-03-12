#include <iostream>

unsigned long long int factorial(int n);

int main() {

    int n;
    std::cin >> n;
    std::cout << factorial(n); 

    return 0;
}

unsigned long long int factorial(int n) {

    if (n > 0) {
        unsigned long long int result = 1;
        for (int i = 1 ; i <= n ; i++){
            result *= i;
        }

        return result;
    } else {
        return 1; // Cuando n sea 0
    }
}