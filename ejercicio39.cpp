#include <iostream>
using namespace std;
int  main()
{
    int cont=0, p, i, numero;
    cout<<"Digite el numero de posiciones"<<endl;
    cin>>p;

    int num[p];

    for( i=1; i<=p;i++)
    {
    cout<<"Digite el numero"<<endl;
    cin>>numero;
    num[i]=numero;
    }

    for (i=1;i<=p;i++)
    {
        cout<<"los numeros ingresados son "<<num[i]<<endl;
        if (num[i]>0)
        {
          cont+=1;
        } 
        cout<<"Hay "<<cont<<" numeros positivos"<<endl;
    }


}