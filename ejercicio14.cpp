#include <iostream>
using namespace std;
int main()
{
	int lol,olo,ol, mayor=1, menor=0, igual=0;
	cout<<"Ingresa un numero:"<<endl;
	cin>>lol;
    cout<<"Ingresa un numero:"<<endl;
	cin>>olo;
    mayor=lol;
    if (lol==olo)
    {
     cout<<"tus numeros son iguales"<<endl;
    } else { 
    if(mayor<olo)
    {
        mayor=olo;
      cout<<"tu numero mayor es: "<<mayor<<endl;
    } else  {
      cout<<"tu numero mayor es: "<<mayor<<endl;
    }}

return 0;


}