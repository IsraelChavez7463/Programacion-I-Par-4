// Materia: Programación I, Paralelo 4
// Autor: Israel Rodrigo Chavez Villacorta
// Carrera: Ingenieria de Sistemas
// Fecha de Creación: 17/08/2026
#include <iostream>
#include <cmath>

using namespace std;
int main (){
    float a,b;
    cout << "Ingrese 1er valor: "; cin >> a;
    cout << "Ingrese 2do valor: "; cin >> b;

    float hipo1 = ((pow(a,2))+(pow(b,2)));
    float hipo2 = sqrt(hipo1);
    cout.precision(3);
    cout << hipo2;
    return 0;
    }