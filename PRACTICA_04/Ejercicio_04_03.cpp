// Materia: Programación I, Paralelo 4
// Autor: Israel Rodrigo Chavez Villacorta
// Carrera: Ingenieria de Sistemas
// Fecha de Creación: 31/08/2026
#include <iostream>

using namespace std;

float calcular_volumen(int radio, int altura){
    const float pi = 3.1416;
    return pi * radio * radio * altura;
}

int main (){
    int radio;
    int altura;
    cout <<"Ingrese radio: "; cin >> radio;
    cout <<"Ingrese altura: "; cin >> altura;
    cout << "El volumen es: "<<calcular_volumen (radio,altura);


    return 0;
}
