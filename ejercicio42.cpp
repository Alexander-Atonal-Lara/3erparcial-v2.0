#include<iostream>
using namespace std;

int main() {
    int f, c, i, j, numero;

    cout << "Digite el numero de filas: ";
    cin >> f;
    cout << "Digite el numero de columnas: ";
    cin >> c;

    int matriz[f][c];
    for (i = 0; i < f; i++) {
        for (j = 0; j < c; j++) {
            cout << "Digite dato para la fila " << i + 1 << " columna " << j + 1 << ": ";
            cin >> numero;
            matriz[i][j] = numero;
        }
    }
    cout << "Los datos que hay en la matriz son:" << endl;
    for (i = 0; i < f; i++) {
        for (j = 0; j < c; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
