// Materia: Programación I, Paralelo 4
// Autor: Israel Rodrigo Chavez Villacorta
// Carrera: Ingenieria de Sistemas
// Fecha de Creación: 31/08/2026
#include <iostream>

using namespace std;

bool funcion_booleana (int numero){
    if (numero % 2 == 0){
        return true;
    }else{
        return false;
    }
}


int main (){
    int numero;
    cout << "Ingrese numero: "; cin >> numero;
    cout << boolalpha<<funcion_booleana (numero);

    return 0;
}