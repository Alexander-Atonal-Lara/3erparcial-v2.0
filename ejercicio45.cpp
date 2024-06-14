#include <iostream>
using namespace std;

int main() {
    char lol[2][10]; 
    int miau[3][4]; 
    int i;
    lol[0][0] = 'F';
    lol[0][1] = 'e';
    lol[0][2] = 'r';
    lol[0][3] = 'n';
    lol[0][4] = 'a';
    lol[0][5] = 'n';
    lol[0][6] = 'd';
    lol[0][7] = 'o';
    lol[0][8] = 'll'; 
    lol[1][0] = 'O';
    lol[1][1] = 's';
    lol[1][2] = 'c';
    lol[1][3] = 'a';
    lol[1][4] = 'r';
    lol[1][5] ='ll'; 

    miau[0][0] = 74;
    miau[1][0] = 56;
    miau[2][0] = 10;

    for (i = 0; i < 2; i++) {
        cout << "El dato en la posicion " << i << " es " << lol[i] << endl;
    }
;
    for (i = 0; i < 3; i++) {
        cout << "El dato e la posicion "<< i <<" es " << miau[i][0] << endl;
    }

    return 0;
}