// Materia: Programación I, Paralelo 4
// Autor: Israel Rodrigo Chavez Villacorta
// Carrera: Ingenieria de Sistemas
// Fecha de Creación: 17/08/2026
#include <iostream>
using namespace std;

//El valor del IVA es del 13%

int main (){
    double valor_producto;
    cout << "Ingrese el valor del producto: ";
    cin >> valor_producto;
    double conversion = valor_producto * 1.13;
    cout << "Precio aplicado con IVA: " << conversion;
    return 0;
}