#include <iostream>
using namespace std;

int main() {
    int i, num, t;
    int acum = 0;

    cout << "Digiet el tamaño del vector (arreglo): ";
    cin >> t;
    int vector[t];

    for (i = 0; i < t; i++) {
        cout << "Digite un numero: ";
        cin >> num;
        vector[i] = num;
        acum = acum + vector[i];
    }

    cout << "La suma de los elementos es: " << acum << endl;

    return 0;
}
