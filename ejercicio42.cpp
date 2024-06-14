#include<iostream>
using namespace std;

int main() {
    int acum = 0;
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
        acum += matriz[i][0];
    }

    cout << "Los datos que hay en la matriz son:" << endl;
    for (i = 0; i < f; i++) {
        for (j = 0; j < c; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    cout << "los datos almacenados en la matriz sons: " << acum << endl;

    return 0;
}
