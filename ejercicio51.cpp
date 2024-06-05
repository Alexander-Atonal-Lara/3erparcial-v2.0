#include <iostream>
#include <string>
using namespace std;

void funcion1(){
    string usuario, gg;
    int num, intentos=3, numlol=2, precio, piezas, lol, olo=0;
    piezas=1;
    int owo=1, uwu=0;
    while (intentos>0){
        cout << "Ingrese su usuario" << endl;
        cin >> usuario;
        cout << "Ingrese su grado y grupo" << endl;
        cin >> gg;
        cout << "Ingrese su numero de lista" << endl;
        cin >> num;

        if (gg == "2bpg" && num == numlol){
            cout << "Bienvenido al sistema" << endl;
            while(owo==1){ 
            piezas = 1;
            olo = 0;
            while(piezas>0){
                cout << "¿Cuantas piezas quieres llevar?" << endl;
                cin >> piezas;
                if(piezas>0){
                    cout << "¿Cual es el precio de la pieza?" << endl;
                    cin >> precio;
                    lol = piezas * precio;
                    olo += lol;
                    uwu+=olo;
                }
            }
            cout << "El total de tu factura es de: " << olo << endl;
            cout<<"te gustaria hacer otra cuenta? Ingrese 1 si es asi."<<endl;
            cin>>owo;
            }
            cout<<"la cuenta final es de "<<uwu<<endl;
            intentos = 0;
            
        } else {
            intentos--;
            if (intentos>0){
                cout << "Error, te quedan " << intentos << " intentos" << endl;
            } else{
                cout << "Has agotado tus intentos" << endl;
            }
        }
    }
}

int main(){
    funcion1();
    return 0;
}