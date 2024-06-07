#include <iostream>
#include <string>
using namespace std;

int main() {
    string usuario;
    string gg;
    int num;
    int intentos = 3;
    int numlol = 1234;
    string gglol = "root";

    while (intentos > 0) {
        cout << "Ingrese su usuario" << endl;
        cin >> gg;
        cout << "Ingrese su contraseña" << endl;
        cin >> num;

        if (gg == gglol && num == numlol) {
            cout << "Bienvenido al sistema";
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