#include <iostream>
using namespace std;
int main()
{
    int i, numero, n;

    cout<<"Digite el numero de posiciones "<<endl;
    cin>>n;
    int num[n];//no entiendo por que marca error en n, pero si compila de forma correcta el programa.

    for(i=0;i<=n-1;i++)
    {
cout<<"digite un numero para la posicion "<<i<<endl;
cin>>numero;
num[i]=numero;
    }
    for(i=0;i<=n-1;i++)
    {
cout<<"El dato en la psoicion "<<i<<" es: "<<num[i]<<endl;;
}
return 0;
}