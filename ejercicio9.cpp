#include <iostream>
using namespace std;

int main()
{
int i, numero;
cout<<"ingresa el numero de repeticiones"<<endl;
cin >> numero;
for (i=5;i<=numero*5;i+=5) {
cout<<i<<endl;
}
return 0;
}