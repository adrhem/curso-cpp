#include <iostream>
using namespace std;

int main() {
    int año=0;

  cout<<"Este año es viciesto";
  cin>>año;
  if ( año % 4==0 && año % 100==0){
    cout<< año << "si es viciesto";

  }
if ( año % 4!=0 && año % 100!=0){
    cout<< año << "no es viciesto";

  }
  return 0;
}
