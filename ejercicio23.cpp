#include <iostream>
#include <math.h>//esta libreria nos proporciona mas funciones matematicas :D
using namespace std;

int main()
{
int numer, numero, resultado;
cout<<"Ingresa tu numero"<<endl;
cin>>numer;
cout<<"Ingresa el numero de potencia"<<endl;
cin>>numero;
resultado=pow(numer, numero);
cout<<"Tu resultado es "<<resultado<<endl;
}