#include <iostream>
using namespace std;
int main()
{
    int i, numero, n;

    cout<<"Digite el tamaño del arreglo "<<endl;
    cin>>n;
    int num[n];

    for(i=0;i<=n;i++)
    {
cout<<"digite un numero para la posicion "<<i<<endl;
cin>>numero;
num[i]=numero;
    }
    for(i=0;i<=n;i++)
    {
cout<<"El dato en la psoicion "<<i<<" es: "<<num[i]<<endl;;
}
return 0;
}