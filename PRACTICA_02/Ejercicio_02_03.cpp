// Materia: Programación I, Paralelo 4
// Autor: Israel Rodrigo Chavez Villacorta
// Carrera: Ingenieria de Sistemas
// Fecha de Creación: 25/08/2026
#include <iostream>
using namespace std;

int main (){
    int x;
    int y;
    int e = 1;
    cout << "Ingrese numero entero: "; cin >> x;
    cout << "Ingrese su exponente: "; cin >> y;
    for (int i = 1; i <= y; i++){
        e = e * x;
    }
    cout << e;
    return 0;
}