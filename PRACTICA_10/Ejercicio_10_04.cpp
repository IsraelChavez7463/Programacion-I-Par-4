//Materia: Programacion I, Paralelo 4
//Autor: Israel Rodrigo Chavez Villacorta
//Carrera: Ingenieria de Sistemas
//Fecha de Creacion: 21/10/2026

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

double generarnumeroaleatorio (double min, double max)
{
    return min + static_cast<double>(rand()) / RAND_MAX * (max - min);
}
void llenarvector (vector <double> &x, int n)
{
    for (int i = 0; i < n; i ++)
    {
        double numero = generarnumeroaleatorio(1.00,10.00);
        x.push_back(numero);
        cout<<x[i]<<" ";
    }
}
void ordenarvector (vector <double> &x, int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (x[j]>x[j+1])
            {
                swap(x[j],x[j+1]);
            }
        }
    }
    for (int i = 0; i < n; i ++)
    {
        cout<<x[i]<<" ";
    }
}
void masbarato (vector<double>&x)
{
    cout<<"El precio mas bajo es: "<<x[0];
}
void mascaro (vector<double>&x, int n)
{
    cout<<"El precio mas caro es: "<<x[n-1];
}
void calcularlamediana (vector<double>x, int n)
{
    double mediana;
    if (n % 2 == 0)
    {
        mediana = (x[(n / 2) - 1] + x[n / 2]) / 2.0;
    }
    else
    {
        mediana = x[n / 2];
    }
    cout << "La mediana es: " << mediana;
}
int main (){
    srand(time(0));
    int n;
    cout<<"Ingrese el numero de productos: ";cin>>n;
    vector <double> precios;
    llenarvector(precios, n);
    cout<<endl;
    ordenarvector(precios,n);
    cout<<endl;
    masbarato(precios);
    cout<<endl;
    mascaro(precios,n);
    cout<<endl;
    calcularlamediana(precios,n);

    return 0;
}