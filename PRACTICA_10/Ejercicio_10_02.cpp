//Materia: Programacion I, Paralelo 4
//Autor: Israel Rodrigo Chavez Villacorta
//Carrera: Ingenieria de Sistemas
//Fecha de Creacion: 21/10/2026

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

int generarnumeroaleatorio(int min, int max)
{
    return rand() % (max - min + 1)+min; 
}
void llenarmatriz(vector <int> &puntuaciones,int n)
{
    for (int i =0; i < n; i++)
    {
        int numero = generarnumeroaleatorio (1,100);
        puntuaciones.push_back(numero);
    }
    for (int j = 0; j < n; j++)
    {
        cout<<puntuaciones[j]<<" ";
    }
}
void ordenarvectorBURBUJA(vector <int> &puntuaciones, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (puntuaciones[j] > puntuaciones[j + 1])
            {
                int aux = puntuaciones[j];
                puntuaciones[j] = puntuaciones[j + 1];
                puntuaciones[j + 1] = aux;
            }
        }
    }
    for (int j = 0; j < n; j++)
    {
        cout << puntuaciones[j] << " ";
    }
}
int main()
{
    srand(time(0));
    int n = 0;
    cout<<"Ingrese numero de jugadores: ";cin>>n;
    vector <int>puntuaciones;

    llenarmatriz(puntuaciones,n);
    cout<<endl;
    ordenarvectorBURBUJA(puntuaciones,n);
    cout<<endl;
    cout << "Primer lugar: "<<puntuaciones[n-1]<<endl;
    cout << "Segundo segundo: "<<puntuaciones[n-2]<<endl;
    cout << "Tercer lugar: "<<puntuaciones[n-3]<<endl;
    return 0;
}