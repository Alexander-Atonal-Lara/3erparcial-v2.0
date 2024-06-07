#include<iostream>
using namespace std;
int main()
{
 int num, cont=0, acum=0;
 num=1;
 cout<<"Ingresa los numeros que quieras sumar."<<endl;
 cout<<"(si quieres terminar, introduce cero)"<<endl;
 while(num>0)
 {
 cout<<"ingresa un numero"<<endl;
 cin>>num;
 acum=acum+num;
 cont++;
 }
 cout<<"Introduciste "<<cont-1<<" numeros"<<endl;
 cout<<"la suma de todos tus numeros es "<<acum<<endl;
}