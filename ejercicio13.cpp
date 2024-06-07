#include <iostream>
using namespace std;
int main()
{
    int lol, olo;
    cout<<"ingresa un numero"<<endl;
    cin>>lol;
    olo=lol%2;
    if (olo==0)
    {
     cout<<"tu numero es par"<<endl;
    } else {
     cout<<"tu numero es impar"<<endl;
    }
    if (lol%3==0)
    {
        cout<<"tu numero es divisible entre 3"<<endl;
    }   
}