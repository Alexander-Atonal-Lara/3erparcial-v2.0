#include <iostream>
#include <vector>
#include <string>
//nose como se usa la libreria vector, la busque en internet xd

using namespace std;

int main() {
    int i, pos, n;
    string nombre;
    
    cout << "Digite el numero de paises" << endl;
    cin >> n;

    vector<string> paises(n);

    for (i = 0; i < n; i++) {
        cout << "Digite pais " << i + 1 << ": ";
        cin >> nombre;
        paises[i] = nombre;
    }

    cout << "Digite la posicion: ";
    cin >> pos;

    if (pos >= 1 && pos <= n) {
        cout << "El pais en la posicion " << pos << " es " << paises[pos - 1] << endl;
    } else {
        cout << "Posicion fuera de rango" << endl;
    }

    return 0;
}