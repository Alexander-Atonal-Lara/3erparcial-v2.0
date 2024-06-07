#include <iostream>
using namespace std;
int main()
{
char letra;
cout<<"Ingresa tu letra"<<endl;
cin>>letra;
if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){
cout<<"Es una volcal"<<endl;
}else{
cout<<"Es una consonante"<<endl;
}
return 0;
}