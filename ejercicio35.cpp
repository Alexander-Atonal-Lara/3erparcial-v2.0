#include <iostream>
using namespace std;
int main()
{
char arreglo1[3];
int arreglo2[4];
int i;

arreglo1[1]='Fernando';
arreglo1[2]='Oscar';

arreglo2[1]=74;
arreglo2[2]=56;
arreglo2[3]=10;
cout<<"arrgelo 1"<<endl;
for (i=1;i<=2;i++)
  {
    cout<<"el dato en la posicion "<<i<<" es "<<arreglo1[i]<<endl;
  }

cout<<"arrgelo 2"<<endl;
for (i=1;i<=3;i++)
  {
    cout<<"el dato en la posicion "<<i<<" es "<<arreglo2[i]<<endl;
  }
}