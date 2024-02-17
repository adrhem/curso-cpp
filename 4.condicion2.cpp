#include <iostream>
using namespace std;

int main() {
    int anio=0;

  cout<<"Este año es viciesto? ";
  cin>>anio;
  // Primer condición: Si el año es divisible entre 4 y no es divisible entre 100, 
  // Pero si es divisible entre 4, no entre 100 y sí en 400
  // Sino no es biciesto
  if ( anio % 4==0 ){
    
    if (anio % 100 != 0 || anio % 400 == 0){
      cout<< anio << "es viciesto";
    } else {
      cout<< anio << "no es viciesto";
    }

  } else {
    cout<< anio << "no es viciesto";

  }


  // if ( anio % 4==0 && (anio % 100!=0 || anio % 400==0)) {
  //   cout<< anio << " es viciesto";
  // } else {
  //   cout<< anio << "no es viciesto";

  // }
  return 0;
}
