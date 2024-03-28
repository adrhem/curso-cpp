#include <iostream>
#include <string>
int main () {
  std::string genero, subgenero, decada;

  std::getline(std::cin, genero);
  std::getline(std::cin, subgenero);
  std::getline(std::cin, decada);

  if (genero.compare("metal") == 0) {
    if (subgenero.compare("death") == 0) {
      if (decada.compare("2010") == 0) {
        std::cout << "Gojira - L'Enfant Sauvage";
      } else if (decada.compare("2020") == 0) {
        std::cout << "Cannibal Corpse - Chaos Horrific";
      } 
    } else if (subgenero.compare("trash") == 0) {
      if (decada.compare("2010") == 0) {
        std::cout << "Testament - Dark Roots of Earth";
      } else if (decada.compare("2020") == 0) {
        std::cout << "Enforced – Kill Grid";
      } 
    } else if (subgenero.compare("folk") == 0) {
      if (decada.compare("2010") == 0) {
        std::cout << "Windrose - Wintersaga";
      } else if (decada.compare("2020") == 0) {
        std::cout << "Bloodywood - Rakshak";
      } 
    }
  } else if (genero.compare("rock") == 0) {
    if (subgenero.compare("hard") == 0) {
      if (decada.compare("2010") == 0) {
        std::cout << "Ghost - Opus Eponymous";
      } else if (decada.compare("2020") == 0) {
        std::cout << "AC/DC - Power up";
      } 
    } else if (subgenero.compare("alternativo") == 0) {
      if (decada.compare("2010") == 0) {
        std::cout<< "Wallows - Nothing Happens";
      } else if (decada.compare("2020") == 0) {
        std::cout<< "Wallows - Tell Me That It's Over";
      } 
    } else if (subgenero.compare("pop") == 0) {
      if (decada.compare("2010") == 0) {
        std::cout << "Kings of Leon - Come Around Sundown";
      } else if (decada.compare("2020") == 0) {
        std::cout << "MGMT - Loss of Life";
      } 
    }
  }

  return 0;
}