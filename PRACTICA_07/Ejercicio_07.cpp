//Materia: Programacion I, Paralelo 4
//Autor: Israel Rodrigo Chavez Villacorta
//Carrera: Ingenieria de Sistemas
//Fecha de Creacion: 28/09/2026
#include <iostream>
#include <vector>
using namespace std;
int main ()


{   
    int numero = 0;
    vector <int> vector;
    do{
        cout <<"Ingrese numero: ";
        cin>>numero;
        vector.push_back(numero);
    }while(vector.size()<100&& numero >= 0);
    for (int i = 0; i<vector.size(); i++)
    {
        if (vector[i]>=0){
            cout<<vector[i]<<" ";
        }
    }
    return 0;
}