// Materia: Programación I, Paralelo 4
// Autor: Israel Rodrigo Chavez Villacorta
// Carrera: Ingenieria de Sistemas
// Fecha de Creación: 18/08/2026
#include <iostream>
using namespace std;
int main(){
    int nota;
    do{
        cout<<"Ingrese nota (1-100): ";
        cin>> nota;
    }while(nota<1 || nota>100);
    cout<<"Nota ingresada correctamente";
    return 0;
}