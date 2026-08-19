// Materia: Programación I, Paralelo 4
// Autor: Israel Rodrigo Chavez Villacorta
// Carrera: Ingenieria de Sistemas
// Fecha de Creación: 17/08/2026
#include <iostream>
using namespace std;

int main (){
    int x;
    cout << "Ingrese a;o: " ; cin >> x;
    if ((x % 4 == 0 && x % 100 !=0) || (x % 400 == 0)){
        cout << "El a;o es bisiesto";
    } else {
        cout << "El a;o no es bisiesto";
    }

    return 0;
}