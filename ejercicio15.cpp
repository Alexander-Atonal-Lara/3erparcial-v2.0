#include <iostream>
using namespace std;
#define precio 70
int main()
{
 int edad;
 float precioo;
 cout<<"Bienvenido al cine"<<endl;
 cout<<"Porfavor, ingresa tu edad"<<endl;
 cin>>edad;
 if (edad<=5)
 {
    precioo=precio*.6;
 } else {
 if (edad>=60)
 {
    precioo=.55*precio;
 } else {
   precioo=precio;
} 
}
 cout<<"el precio es de tu entrada es de :"<<precioo<<endl;
}