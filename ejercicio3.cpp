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
    if (lol>menor)
    {
        if (lol<mayor)
        {
          cout<<"tu numero intermedio es "<<lol<<endl;
        }
    } 
    if (olo>menor)
    {
        if (olo<mayor)
        {
          cout<<"tu numero intermedio es "<<olo<<endl;
        }
    } 
    if (ol>menor)
    {
        if (ol<mayor)
        {
          cout<<"tu numero intermedio es "<<ol<<endl;
        }
    } 
return 0;


}