#include<iostream>
using namespace std;
int main()
{
    int acum=0, acum2=0, i, t, num;
    cout<<"digite el tamño del vector 1"<<endl;
    cin>>t;

    int vector1[t];
    for(i=1;i<=t;i++)
    {
        cout<<"digite un numero "<<i<<endl;
        cin>>num;
        vector1[i]=num;
        acum=acum+vector1[i];
    }
    cout<<"digite el tamño del vector 2 "<<endl;
    cin>>t;

    int vector2[t];
    for(i=1;i<=t;i++)
    {
        cout<<"digite un numero "<<i<<endl;
        cin>>num;
        vector2[i]=num;
        acum2=acum2+vector1[i];
    }
    int vector3[2];
    vector3[1]=acum+acum2;

    cout<<"El resultado total es: "<<vector3[1]<<endl;
    return 0;
}