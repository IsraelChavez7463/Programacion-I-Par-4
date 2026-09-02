// Materia: Programación I, Paralelo 4
// Autor: Israel Rodrigo Chavez Villacorta
// Carrera: Ingenieria de Sistemas
// Fecha de Creación: 31/08/2026
#include <iostream>

using namespace std;

int calcular_area(int base, int altura){
    return (base * altura)/2;
}

int main (){
    int base;
    int altura;
    cout <<"Ingrese base: "; cin >> base;
    cout <<"Ingrese altura: "; cin >> altura;
    cout << "El area es: "<<calcular_area (base,altura);


    return 0;
}
