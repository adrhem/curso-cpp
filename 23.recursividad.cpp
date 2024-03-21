#include <iostream>

unsigned long long int factorial(unsigned long long int n);

int main() {

    // 3! = 3 * 2 * 1;
    // 2! = 2 * 1;
    // 3! = 3 * 2! 
    // factorial(n) = n * factorial(n-1)
    // 5! = 5 * 4 * 3 * 2 * 1;
    // 5! = 5 * factorial (4) = 5 * (4 * factorial(3)) 
    // 5 * (4 * (3 * factorial(2)))
    // 5 * (4 * (3 * (2 * factorial(1)))
    // 5 * (4 * (3 * (2 * 1))
    // 5! = 5 * 4 * 3 * 2 * 1

    std::cout << factorial(5);

    return 0;
}

unsigned long long int factorial(unsigned long long int n) {
    if (n <= 1) {
        return n;
    } else {
        return n * factorial(n - 1);
    }
}