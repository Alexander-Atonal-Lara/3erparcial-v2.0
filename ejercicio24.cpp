#include <iostream>
using namespace std;
int main()
{
    int lol, olo, i=0, luli=0, juan=0;
    cout<<"ingresa el numero que desees potenciar"<<endl;
    cin>>lol;
    cout<<"ingresa el numero de potencia"<<endl;
    cin>>olo;
    luli=lol;
    juan=lol*lol;
     for (i=1;i<=olo-1;i++)
    {
    juan=juan*lol;
    }
    juan=juan/lol;
    cout<<"tu resultado es: "<<juan<<endl;


}