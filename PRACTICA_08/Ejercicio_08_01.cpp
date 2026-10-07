//Materia: Programacion I, Paralelo 4
//Autor: Israel Rodrigo Chavez Villacorta
//Carrera: Ingenieria de Sistemas
//Fecha de Creacion: 05/10/2026
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int Generarnumeroaleatorio (int min, int max)
{
    return rand() % (max - min +1 )+min;
}
void imprimirvectores (vector <string> &a,vector <string> &b,vector <int> &c,int &numero,int n)
{
    srand(time(NULL));
    for (int i = 0;i<n;i++)
    {
        numero = Generarnumeroaleatorio (0,9);
        cout << a[numero]<<" ";
        cout << b[numero]<<" ";
        cout << c[numero]<<" ";
        cout<<endl;
    }
    
}
int main (){
    int numero =0;
    int n;
    cout<<"ingrese el numero de veces: ";
    cin>>n;
    vector <string> nombres = {"Rodrigo","Tedy","Luis","Daniel","Alejandro","Israel","Monica","Amilcar","Joel","Geraldine"};
    vector <string> apellidos = {"Chavez","Villacorta","Apaza","Condori","Quispe","Ramos","Axel","Aliaga","Limachi","Aguirre"};
    vector <int> edades = {19,28,37,46,55,64,73,82,91,15};
    imprimirvectores (nombres,apellidos,edades,numero,n);
    
    return 0;
}