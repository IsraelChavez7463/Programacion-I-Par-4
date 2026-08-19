// Materia: Programación I, Paralelo 4
// Autor: Israel Rodrigo Chavez Villacorta
// Carrera: Ingenieria de Sistemas
// Fecha de Creación: 17/08/2026
#include <iostream>
using namespace std;

int main (){
    int x;
    cout << "Ingrese numero: "; cin >> x;
    if (x % 2 == 0){
        cout << "El numero es par";
    }else{
        cout << "El numero no es par";
    }
    return 0;
}