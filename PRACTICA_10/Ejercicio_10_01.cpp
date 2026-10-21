//Materia: Programacion I, Paralelo 4
//Autor: Israel Rodrigo Chavez Villacorta
//Carrera: Ingenieria de Sistemas
//Fecha de Creacion: 21/10/2026
#include <iostream>
#include<cstdlib>
#include <ctime>
#include <vector>
#include <string>

using namespace std;
int generarnuemroaleatorio (int min, int max)
{
    return rand() % (max - min + 1)+min;
}
void mostrarnombrescompletos (vector <string> nombres, vector <string> apellidos, int n)
{
    for (int i = 0; i < n; i++)
    {
        
        cout<<nombres[generarnuemroaleatorio(0,9)]<<" ";
        cout<<apellidos[generarnuemroaleatorio(0,9)]<<endl;
    }

}
int main()
{
    srand(time(NULL));
    int n = 0;
    cout<<"Ingrese el numero de nombres completos: ";cin>>n;
    vector <string> nombres = {"Rodrigo","Daniel","Tedy","Amilcar","David","Geraldine","Joel","Marcelo","Roberto","Agustin"};
    vector <string> apellidos = {"Chavez","Quispe","Apaza","Condori","Caballero","Condori","Caceres","Huanca","Lopez","Ramirez"};
    mostrarnombrescompletos(nombres, apellidos,n);

    return 0;
}