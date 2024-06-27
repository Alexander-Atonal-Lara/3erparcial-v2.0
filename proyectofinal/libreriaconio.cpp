#include <conio.h>
#include <iostream>
using namespace std;

int main() {
    char opcion;
    float altura, base, base2, final;

   cout << "Selecciona una opcion:\n";
   cout << "a) Triaungulo\n";
   cout << "b) Trapecio\n";
   cout << "c) Rectangulo\n";

    while (true) {
        if (_kbhit()) {
            opcion = _getch();

            if (opcion == 'a' || opcion == 'A') {
                system("cls");
                 cout<<"Ingrese la base:"<<endl;
                 cin>>base;
                 cout<<"Ingrese la altura:"<<endl;
                 cin>>altura;
                 final=(base*altura)/2;
                 cout<<"El area es de"<<final<<endl;
                break;
            } else if (opcion == 'b' || opcion == 'B') {
                   system("cls");
                 cout<<"Ingrese la base"<<endl;
                 cin>>base;
                 cout<<"Ingrese la base 2"<<endl;
                 cin>>base2;
                 cout<<"Ingrese la altura:"<<endl;
                 cin>>altura;
                final=((base+base2)*altura)/2;
                 cout<<"El area es de"<<final<<endl;
                break;
            } else if (opcion == 'c' || opcion == 'C') {
                   system("cls");
               cout<<"Ingrese el largo:"<<endl;
               cin>>base;
             cout<<"Ingrese el ancho:"<<endl;
             cin>>altura;
             final=(base*altura);
             cout<<"El area es de:"<<final<<endl;
                break;
            } else {
                cout << "\nOpcion no avlida. Por favor selecciona a, b o c.\n";
            }
        }
    }

    return 0;
}