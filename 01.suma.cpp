#include <iostream>
using namespace std;

// Compilar y ejecutar: g++ .\1.suma.cpp && .\a.exe
int main() {
  
  // Declaración de variables
  int a, b;
  int c;

  cout << "Ingrese el valor de a: ";
  cin >> a;

  cout << "Ingrese el valor de b: ";
  cin >> b;

  c = a + b;

  cout << "El resultado de la suma es: " << c << endl;
  
  return 0;
  
}