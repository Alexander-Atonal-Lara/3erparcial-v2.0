#include <iostream>
using namespace std;
int main()
{
	int lol,olo,ol, mayor=1, menor=0, igual=0;
	cout<<"Ingresa un numero:"<<endl;
	cin>>lol;
    cout<<"Ingresa un numero:"<<endl;
	cin>>olo;
    cout<<"Ingresa un numero:"<<endl;
	cin>>ol;
    mayor=lol;
    if (mayor<olo)
    {
        mayor=olo;
    }
    if (mayor<ol)
    {
        mayor=ol;
    }
    cout<<"tu numero mayor es "<<mayor<<endl;
    menor=lol;
    if (menor>olo)
    {
        menor=olo;
    }
    if (menor>ol)
    {
        menor=ol;
    }
     cout<<"tu numero menor es "<<menor<<endl;
    if (lol==olo)
    {
        if(lol==ol)
        {
         cout<<"Tus tres numeros son iguales"<<endl;
        } else {
         cout<<"Tu numero igual es "<<lol<<endl;

    }
    } else {
    if (lol==ol)
    {
    cout<<"Tu numero igual es "<<lol<<endl; 
    } else{
    if (ol==olo)
    cout<<"Tu numero igual es "<<olo<<endl;
    }    
    } 
return 0;


}