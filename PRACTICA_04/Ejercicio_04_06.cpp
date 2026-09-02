// Materia: Programación I, Paralelo 4
// Autor: Israel Rodrigo Chavez Villacorta
// Carrera: Ingenieria de Sistemas
// Fecha de Creación: 31/08/2026
#include <iostream>

using namespace std;

int suma_numeros(int numero){
    int suma = 0;
    for (int i = 1 ; i<=numero ; i++ ){
        suma += i;
    }
    return suma;
}
int main (){
    int numero;
    cout << "Ingrese numero: ";cin >> numero;
    cout << suma_numeros (numero);
    return 0;
}