#include <iostream>
#include <string>
using namespace std;

void miau()
{
    int i, piezas, precio, lol, olo; 
        cout << "Bienvenido al sistema";
         for (i=1;piezas>0;i++){
         cout<<"¿Cuantas piezas quieres llevar?"<<endl;
         cin >> piezas;
         if(piezas>0){
         cout << "¿Cual es el precio de la pieza?"<<endl;
         cin >> precio;
         lol=piezas*precio;
         olo=olo+lol;}
    }
         cout <<"El total de tu factura es de:"<< olo-3 << endl; //en el compilador online de C++ lo compila diferente, para que compile bien, retire de este letrero el "-3" porfavor.   
}

int main() {

    string usuario;
    string gg;
    string num;
    int intentos = 3;
    string numlol = "2b2";
    string gglol = "Alexander";
    int i;

    while (intentos > 0) {
        cout << "Ingrese su usuario" << endl;
        cin >> gg;
        cout << "Ingrese su contraseña" << endl;
        cin >> num;

        if (gg == gglol && num == numlol) {
            miau();
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