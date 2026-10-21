//Materia: Programacion I, Paralelo 4
//Autor: Israel Rodrigo Chavez Villacorta
//Carrera: Ingenieria de Sistemas
//Fecha de Creacion: 28/09/2026
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;
int Generarnumeroaleatorio (int min, int max)
{
    return rand() % (max-min+1)+min;
}
int main (){
    srand(time(0));
    int n = Generarnumeroaleatorio(1,10);
    int numero=0;
    vector <int> vector1(n);
    vector <int> vector2(n);
    vector <int> resultado(n*2);
    cout<<"VECTOR 1"<<endl;
    for (int i = 0; i< vector1.size(); i++)
    {
        numero = Generarnumeroaleatorio(1,10);
        vector1 [i]=numero;
        cout<<vector1[i]<<" ";
    }
    cout<<endl;
    cout<<"VECTOR 2"<<endl;
    for (int i = 0; i< vector2.size(); i++)
    {
        numero = Generarnumeroaleatorio(1,10);
        vector2 [i]=numero;
        cout<<vector2[i]<<" ";
    }
    cout<<endl;
    cout<<"Resultado: "<<endl;
    for (int i = 0; i < vector1.size(); i++)
    {
        resultado[i]=vector1[i];
    }

    for (int i = 0; i < vector2.size(); i++)
    {
        resultado[i+n]=vector2[i];
    }
    for (int i = 0; i < resultado.size(); i++)
    {
        cout << resultado[i] << " ";
    }
    cout << endl;
    
    return 0;
}