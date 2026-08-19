// Materia: Programación I, Paralelo 4
// Autor: Israel Rodrigo Chavez Villacorta
// Carrera: Ingenieria de Sistemas
// Fecha de Creación: 17/08/2026
#include <iostream>
using namespace std;

int main (){
    int x;
    cout << "Ingrese numero del 1 - 7 porfavor: "; cin >> x;
    switch (x){
        case 1: cout << "Lunes";break;
        case 2: cout << "Martes";break;
        case 3: cout << "Miercoles";break;
        case 4: cout << "Jueves";break;
        case 5: cout << "Viernes";break;
        case 6: cout << "Sabado";break;
        case 7: cout << "Domingo";break;
        default: cout << "Ingrese nuemero del 1-7";break;
    }
    return 0;
}