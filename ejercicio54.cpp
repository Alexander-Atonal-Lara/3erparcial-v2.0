#include<iostream>
#include<math.h>

using namespace std;

void raiz(int num)
{
int raiz=sqrt(num);
cout<<"la raiz cuadrada de "<<num<<" es "<<raiz<<endl;
}


int main()
{
    int num1;
    float num3, num2;
    cout<<"Ingresa un numero natural"<<endl;
    cin>>num1;
    cout<<"Ingresa el tercer decimal"<<endl;
    cin>>num2;
    cout<<"Ingresa el segundo decimal"<<endl;
    cin>>num3;
    raiz(num1);
}