// Materia: Programación I, Paralelo 4
// Autor: Israel Rodrigo Chavez Villacorta
// Carrera: Ingenieria de Sistemas
// Fecha de Creación: 17/08/2026
#include <iostream>
using namespace std;

int main (){
    float n1,n2,n3;
    cout << "Ingrese nota teorica: "; cin >> n1;
    cout << "Ingrese nota de practicas: "; cin >> n2; 
    cout << "Ingrese nota de participacion: "; cin >> n3;
    float nt1 = n1 * 0.30, nt2 = n2 * 0.60, nt3 = n3 * 0.10;
    float n_final = nt1 + nt2 + nt3;
    cout << "-------------------------";
    cout << "\nPracticas final: " << nt1;
    cout << "\nTeorica final: " << nt2;
    cout << "\nParticipacion final: " << nt3;
    cout << "\n-------------------------";
    cout << "\nNota total final: " << n_final;

    return 0;
}