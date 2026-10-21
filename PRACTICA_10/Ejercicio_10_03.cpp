//Materia: Programacion I, Paralelo 4
//Autor: Israel Rodrigo Chavez Villacorta
//Carrera: Ingenieria de Sistemas
//Fecha de Creacion: 21/10/2026

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

float generarnumeroaleatorio(float min, float max)
{
    return min + static_cast<float>(rand()) / RAND_MAX * (max - min);
}
void llenarvector (vector<float>&x, int n)
{
    for (int i = 0; i < n; i++)
    {
        float numero = generarnumeroaleatorio(10.00,20.00);
        x.push_back(numero);
        cout<<x[i]<<" ";
    }
}

void ordenarvector (vector<float>&x, int n)
{
    for (float i = 1; i < n; i++)
    {
        float actual = x[i]; 
        float j = i - 1;    

        while (j >= 0 && x[j] > actual)
        {
            x[j + 1] = x[j]; 
            j--;             
        }
        
        x[j + 1] = actual; 
    }
    for (float i = 0; i<n ; i++)
    {
        cout<<x[i]<<" ";
    }
}
int main ()
{
    srand(time(0));
    int n;
    cout<<"Ingrese numero de competidores: ";cin>>n;
    vector <float> segundos;
    llenarvector(segundos,n);
    cout<<endl;
    ordenarvector(segundos,n);

    return 0;
}