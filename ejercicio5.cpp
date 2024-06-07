#include <iostream>
using namespace std;
int main()
{
    int horas;
    float sueldo, sueldof;
    cout<<"Ingrese las horas trabajadas:"<<endl;
    cin>>horas;
    cout<<"Ingrese el sueldo por hora:"<<endl;
    cin>>sueldo;
    if (horas<=40)
    {
    sueldof=horas*sueldo;    
    cout<<"Tu sueldo es de:"<< sueldof<< endl;
    }
if (horas>40)
    {
    sueldof=(horas*(sueldo+(sueldo*.15)));    
    cout<<"Tu sueldo es de:"<<sueldof<<endl;
    }
    return 0;
}