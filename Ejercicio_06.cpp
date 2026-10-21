//Materia: Programacion I, Paralelo 4
//Autor: Israel Rodrigo Chavez Villacorta
//Carrera: Ingenieria de Sistemas
//Fecha de Creacion: 28/09/2026
#include <iostream>
#include <vector>
using namespace std;
int main ()
{
    vector <int> vector1 (5);
    vector <int> vector2 (5);
    vector <int> vector3 (5);
    for (int i = 0; i< 5; i++)
    {
        cout<<"ingrese valor "<<i+1<<" del vector 1: ";
        cin>>vector1[i];
    }
    cout<<endl;
    for (int i = 0; i< 5; i++)
    {
        cout<<"ingrese valor "<<i+1<<" del vector 2: ";
        cin>>vector2[i];
    }
    cout<<endl;
    for (int i = 0; i< 5; i++)
    {
        vector3[i]=vector1[i]+vector2[i];
        cout<<vector3[i]<<" ";

    }


    return 0;
}