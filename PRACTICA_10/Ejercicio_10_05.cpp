//Materia: Programacion I, Paralelo 4
//Autor: Israel Rodrigo Chavez Villacorta
//Carrera: Ingenieria de Sistemas
//Fecha de Creacion: 21/10/2026

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>

using namespace std;

void ordenarletras (string &palabra, int n)
{
    for (int i = 0; i < n - 1 ; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (palabra[j]> palabra[j+1])
            {
                swap(palabra[j],palabra[j+1]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<palabra[i];
    }
}
int main (){
    string palabra = "";
    cout<<"Ingrese palabra: ";cin>>palabra;
    int n = palabra.size();
    ordenarletras(palabra,n);
    
    return 0;
}