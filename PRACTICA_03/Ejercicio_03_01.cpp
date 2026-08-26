// Materia: Programación I, Paralelo 4
// Autor: Israel Rodrigo Chavez Villacorta
// Carrera: Ingenieria de Sistemas
// Fecha de Creación: 24/08/2026

#include <iostream>
using namespace std;

int main (){

    int n;
    cout<<"Ingrese numero entero: ";cin>>n;

    for (int i = 1; i <= 10; i ++){
        cout << n << "x" << i << "=" << n*i << endl;

    }
    return 0;
}