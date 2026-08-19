// Materia: Programación I, Paralelo 4
// Autor: Israel Rodrigo Chavez Villacorta
// Carrera: Ingenieria de Sistemas
// Fecha de Creación: 17/08/2026
#include <iostream>
using namespace std;

int main (){
    int edad; 
    char sexo [10];
    double altura;

    cout << "Ingrese edad: ";
    cin >> edad;
    cout << "Ingrese sexo: ";
    cin >> sexo;
    cout << "Ingrese altura: ";
    cin >> altura;

    cout << "-----------------------------"<<endl;
    cout << "\tEdad: "<<edad<<endl;
    cout << "\tSexo: "<<sexo<<endl;
    cout << "\tAltura: "<<altura<<endl;

    return 0;
}