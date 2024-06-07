#include <iostream>
using namespace std;

int main() {
  int carte;
  cout<<"Ingrese el n�mero de la carta (1-12): "<<endl;
  cin>>carte;

  switch (carte) {
    case 1:
      cout<<"as"<<endl;
      break;
    case 10:
      cout<<"sota"<<endl;
      break;
    case 11:
      cout<<"caballo"<<endl;
      break;
    case 12:
      cout<<"rey"<<endl;
      break;
    default:
      if (carte >= 2 && carte <= 9) {
        cout<<"no es ninguna figura ni tampoco"<<endl;
      } else {
        cout<<"este no es n�mero de una carta de la baraja espa�ola"<<endl;
      }
  }

  return 0;
}