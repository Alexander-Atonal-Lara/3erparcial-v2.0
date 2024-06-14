#include <iostream>
#include <cstdlib> 
#include <ctime>

using namespace std;

int main()
{
    int arreglo[3][3];
    int i, j;
    int azar[10];
    srand(time(0));
    for (i = 0; i < 10; i++) {
        azar[i] = rand() % 100;
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            arreglo[i][j] = azar[i * 3 + j];
        }
    }
    cout << "La matriz arreglo es:" << endl;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            cout << arreglo[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}