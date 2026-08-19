// Materia: Programación I, Paralelo 4
// Autor: Israel Rodrigo Chavez Villacorta
// Carrera: Ingenieria de Sistemas
// Fecha de Creación: 17/08/2026
#include <iostream>
using namespace std;

int main (){
    int n, residuo = 0, suma = 0,contador = 0;
    cout << "Ingrese numero: "; cin >> n;
    while (n > 0){
        residuo = n % 10;
        contador = contador + 1;
        n = n / 10;
        suma = suma + residuo;
    }
    cout << "El numero de digitos es: " << contador <<endl;
    cout << "La suma de los digitos del numero es: " << suma;
    return 0;
}