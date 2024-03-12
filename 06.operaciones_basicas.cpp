#include <iostream>

int main() {

  int total_cachorros; // cantidad de cachorros que dio a luz la perrita de don pancho
  int pancho_cachorros; // cantidad de cachorros con los que se quedará don pancho
  int n_hijos; // cantidad de hijos de don pancho

  int cantidad_total; 
  int cachorros_sobrantes;

  std::cin>>total_cachorros;
  std::cin>>pancho_cachorros;
  std::cin>>n_hijos;

  cachorros_sobrantes = (total_cachorros - pancho_cachorros) % (1 + n_hijos);
  cantidad_total = pancho_cachorros + cachorros_sobrantes;

  std::cout << cantidad_total;

  return 0;
}