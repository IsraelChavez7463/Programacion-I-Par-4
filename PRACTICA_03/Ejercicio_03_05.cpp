// Materia: Programación I, Paralelo 4
// Autor: Israel Rodrigo Chavez Villacorta
// Carrera: Ingenieria de Sistemas
// Fecha de Creación: 26/08/2026

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main (){
    int n;
    int n_ale;
    int cont=0;
    srand(time(0));
    cout << "Ingrese numero (1-100): "; cin >> n;

    do{
        n_ale = (rand() % (101));

        if (n > n_ale){
            cout << n_ale<< " ";
            cout << " es < a su numero"<<endl;
        }else if (n < n_ale){
            cout << n_ale << " ";
            cout << " es > a su numero"<<endl;
        }
        cont++;
    }while (n!=n_ale);
    cout << "Su numero es "<< n_ale<< endl;
    cout << "Tomo: " << cont - 1 << " intentos"<<endl;
    return 0;
}