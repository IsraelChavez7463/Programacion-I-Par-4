// Materia: Programación I, Paralelo 4
// Autor: Israel Rodrigo Chavez Villacorta
// Carrera: Ingenieria de Sistemas
// Fecha de Creación: 17/08/2026
#include <iostream>
using namespace std;

int main(){
    float a,b,c,d;
    cout << "Ingrese 1er valor: "; cin >> a;
    cout << "Ingrese 2do valor: "; cin >> b;
    cout << "Ingrese 3er valor: "; cin >> c;
    cout << "Ingrese 4to valor: "; cin >> d;
    float resultado = (a+b)/(c+d);
    cout.precision(3);
    cout << resultado;
    return 0;
}