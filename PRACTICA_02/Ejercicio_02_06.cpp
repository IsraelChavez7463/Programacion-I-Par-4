// Materia: Programación I, Paralelo 4
// Autor: Israel Rodrigo Chavez Villacorta
// Carrera: Ingenieria de Sistemas
// Fecha de Creación: 25/08/2026

#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Ingrese un numero entero positivo: ";cin >> numero;
    cout << "Descomposicion en factores primos: ";

    int divisor = 2;

    while (numero > 1) {
        if (numero % divisor == 0) {
            cout << divisor << " ";
            numero /= divisor;
        } else {
            divisor++;
        }
    }

    cout << endl;
    return 0;
}