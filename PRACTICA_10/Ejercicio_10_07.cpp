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

int generarnumeroaleatorio (int min, int max)
{
    return rand() % (max - min +1 )+ min;
}

void llenarmatriz (int matriz[5][3], vector <string> nombres)
{
    for (int i = 0; i < 5; i ++)
    {
        for (int j = 0; j < 3; j++)
        {
            int numero = generarnumeroaleatorio (1,10);
            matriz[i][j] = numero;
        }
    }
    for (int i = 0; i < 5; i ++)
    {
        cout<<nombres[i]<<" ";
        for (int j = 0; j < 3; j++)
        {           
            cout<<matriz[i][j]<<" ";
        }
        cout<<endl;
    }
}

void sacarpromedio (int matriz[5][3], vector <float> &promedios, vector<string> nombres)
{
    for (int i = 0; i < 5; i++)
    {
        float sumafila = 0.0;

        for (int j = 0; j < 3; j++)
        {
            sumafila += matriz[i][j];
        }
        float promedio = sumafila/3;
        promedios.push_back(promedio);
        cout<<nombres[i]<<" ";
        cout<<promedios[i]<<endl;

    }

}
void ordenarmatriz (int matriz[5][3], vector <string>&nombres, vector <float> &promedios)
{
    int n = nombres.size();
    for (int i = 0; i < n-1.; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (nombres[j]>nombres[j+1])
            {
                swap(nombres[j],nombres[j+1]);
                swap(promedios[j],promedios[j+1]);
                for (int k = 0; k < 3; k++)
                {
                    swap(matriz[j][k], matriz[j+1][k]);
                }
            }
                
        }
    }
    for (int i = 0; i < 5; i ++)
    {
        cout<<nombres[i]<<" | ";
        for (int j = 0; j < 3; j++)
        {           
            cout<<matriz[i][j]<<"| ";
        }
        cout<<"Pomedio: "<<promedios[i]<<endl;
    }
    
}

int main ()
{
    srand(time(0));
    vector <string> nombres = {"Rodrigo","Facundo","Angela","Ezequiel","Benlinda"};
    int matriz[5][3];
    vector <float> promedios;
    float sumafila = 0.0;
    llenarmatriz(matriz,nombres);
    cout<<endl;
    sacarpromedio(matriz,promedios, nombres);
    cout<<endl;
    ordenarmatriz(matriz,nombres,promedios);

    return 0;
}




 