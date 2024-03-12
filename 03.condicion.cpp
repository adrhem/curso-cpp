#include <iostream>
using namespace std;

// Compilar y ejecutar: g++ .\3.condicion.cpp && .\a.exe
int main() {
  
  string nombre, apellidos;
  int anioNacimiento;

  cout << "Bienvenido a Volaris!" << endl;
  cout << "Ingrese su nombre: ";
  getline(cin, nombre);

  cout << "Ingrese sus apellidos: ";
  getline(cin, apellidos);

  cout << "Ingrese su año de nacimiento: ";
  cin >> anioNacimiento;

  if (anioNacimiento < 2024 - 18) { // 2006
    cout << "Bienvenido " << nombre << " " << apellidos << "!" << endl;
  } else {
    cout << "Lo sentimos, no puedes volar con nosotros." << endl;
  }

  return 0;
}