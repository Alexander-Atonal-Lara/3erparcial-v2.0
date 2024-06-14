#include<iostream>
#include<cstdlib> // Nose como se usa esta liberaria, la saque de internet xd
using namespace std;

int main()
{
    int i, j;
    int matriz[3][3];
    int azar[10];
    for (i = 0; i < 10; i++) {
        azar[i] = rand() % 100;
    }
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            matriz[i][j] = azar[rand() % 10];
        }
    }
    cout << "Matriz:" << endl;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
