#include<iostream>
using namespace std;
int main()
{
    int lol=0, olo=0;
    cout<<"Introduce el valor del dividendo"<<endl;
    cin>>lol;
    cout<<"introduce el valor del divisor"<<endl;
    cin>>olo;
    if (olo==0)
    {
        cout<<"0 no puede ser divisor"<<endl;
    } else {
    cout<<"El resultado de la division es "<<lol/olo<<endl;
    cout<<"El residuo de la diviosn es "<<lol%olo<<endl;
    }

}