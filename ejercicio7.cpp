#include <iostream>
using namespace std;

int main()
{
    int opcion;
    float altura, base, base2, final;
    cout<<"1.-Calular el area de un triangulo:"<<endl;
    cout<<"2.-Calular el area de un trapecio:"<<endl;
    cout<<"3.-Calular el area de un rectangulo:"<<endl;
    cout<<"Que te gustaria calcular?:"<<endl;
    cin>>opcion;
     switch (opcion)
    {
    case 1:
    cout<<"Ingrese la base:"<<endl;
    cin>>base;
    cout<<"Ingrese la altura:"<<endl;
    cin>>altura;
    final=(base*altura)/2;
    cout<<"El area es de"<<final<<endl;
    break;
    case 3:
    cout<<"Ingrese el largo:"<<endl;
    cin>>base;
    cout<<"Ingrese el ancho:"<<endl;
    cin>>altura;
    final=(base*altura);
    cout<<"El area es de:"<<final<<endl;
    break;
   case 2:
    cout<<"Ingrese la base"<<endl;
    cin>>base;
    cout<<"Ingrese la base 2"<<endl;
    cin>>base2;
    cout<<"Ingrese la altura:"<<endl;
    cin>>altura;
    final=((base+base2)*altura)/2;
    cout<<"El area es de"<<final<<endl;
    break;
    }
    if (opcion>3)
    {
        cout<<"esa no es una opcion"<<endl;
    }
    return 0;
}
