// Materia: Programación I, Paralelo 4
// Autor: Israel Rodrigo Chavez Villacorta
// Carrera: Ingenieria de Sistemas
// Fecha de Creación: 17/08/2026
#include <iostream>
using namespace std;

int main (){
    float n1,n2,n3,n4;
    cout << "Ingrese nota del estudiante 1: "; cin >> n1;
    cout << "Ingrese nota del estudiante 2: "; cin >> n2;
    cout << "Ingrese nota del estudiante 3: "; cin >> n3;
    cout << "Ingrese nota del estudiante 4: "; cin >> n4;
    float promedio = (n1+n2+n3+n4)/4;
    cout << "El nota final media de los 4 estudiantes es: "<<promedio;

    return 0;
}