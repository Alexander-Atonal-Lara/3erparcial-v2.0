#include <iostream>
#include <string>
using namespace std;

int main() {
    string usuario;
    string gg;
    string num;
    int intentos = 3;
    string numlol = "2b2";
    string gglol = "Alexander";
    int precio,piezas, lol, olo=0;
    piezas=1;

    while (intentos > 0) {
        cout << "Ingrese su usuario" << endl;
        cin >> gg;
        cout << "Ingrese su contraseña" << endl;
        cin >> num;

        if (gg == gglol && num == numlol) {
            cout << "Bienvenido al sistema";
            while(piezas>0){
         cout<<"¿Cuantas piezas quieres llevar?"<<endl;
         cin >> piezas;
         if(piezas>0){
         cout << "¿Cual es el precio de la pieza?"<<endl;
         cin >> precio;
         lol=piezas*precio;
         olo=olo+lol;}
    }
         cout <<"El total de tu factura es de:"<< olo << endl;
            intentos = 0;
        } else {
            intentos--;
            if (intentos > 0) {
                cout << "Error, te quedan " << intentos << " intentos" << endl;
            } else {
                cout << "Has agotado tus intentos" << endl;
            }
        }
    }

    return 0;
}