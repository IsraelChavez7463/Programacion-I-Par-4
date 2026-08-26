// Materia: Programación I, Paralelo 4
// Autor: Israel Rodrigo Chavez Villacorta
// Carrera: Ingenieria de Sistemas
// Fecha de Creación: 25/08/2026
#include <iostream>
using namespace std;

int main (){
    int n;
    int suma = 0;
    cout << "Ingrese un numero: "; cin >> n;
    for (int i = 1 ; i <= n ; i+=1){
        suma = suma + ((2*i)-1);
    }
    cout << suma;

    return 0;
}