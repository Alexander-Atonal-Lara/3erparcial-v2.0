#include <iostream>
using namespace std;
int main()
{
	int lol,olo,ol, lo, l, menor=0;
	cout<<"Ingresa un numero:"<<endl;
	cin>>lol;
    cout<<"Ingresa un numero:"<<endl;
	cin>>olo;
    cout<<"Ingresa un numero:"<<endl;
	cin>>ol;
    cout<<"Ingresa un numero:"<<endl;
	cin>>lo;
    cout<<"Ingresa un numero:"<<endl;
	cin>>l;
    menor=lol;
    if (menor>olo)
    {
        menor=olo;
    }
    if (menor>ol)
    {
        menor=ol;
    }
    if (menor>lo)
    {
        menor=lo;
    }
    if (menor>l)
    {
        menor=l;
    }
     cout<<"tu numero menor es "<<menor<<endl;
}