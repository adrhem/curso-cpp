#include <iostream>
using namespace std;

// Compilar y ejecutar: g++ .\2.saludo.cpp && .\a.exe
int main() {
  
  string nombre;

  cout << "Ingrese su nombre: ";
  // Lee el buffer hasta el primer espacio
  // cin >> nombre;
  // Lee el buffer completo con o sin espacios
  getline(cin, nombre);

  cout << "Hola " << nombre << "!" << endl;
  
  return 0;
  
}