//Materia: Programacion I, Paralelo 4
//Autor: Israel Rodrigo Chavez Villacorta
//Carrera: Ingenieria de Sistemas
//Fecha de Creacion: 28/09/2026
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

float Generarnumeroaleatorio (int min, int max)
{
    return rand() % (max - min + 1) + min;
}


int main ()
{
    srand(time(0));
    int numero;
    float suma = 0;
    float media = 0;
    float desviacion=0;
    float sumatoriacuadrada=0;
    float varianza=0;
    vector <float> listadenumeros (3);
    for (int i = 0; i < listadenumeros.size(); i++)
    {
        numero = Generarnumeroaleatorio (1,10);
        listadenumeros[i]=numero;
        cout<<listadenumeros[i]<<endl;
        suma += listadenumeros[i];
    }
    media = suma / listadenumeros.size();
    for (int i = 0; i < listadenumeros.size(); i++)
    {
        desviacion = listadenumeros[i]-media;
        cout<<desviacion<<endl;
        sumatoriacuadrada += desviacion*desviacion;
        
    }
    varianza = sumatoriacuadrada / (listadenumeros.size() - 1);
    cout <<endl;
    cout<<suma;
    cout<<endl;
    cout<<media;
    cout<<endl;
    cout<<varianza;
    return 0;
}