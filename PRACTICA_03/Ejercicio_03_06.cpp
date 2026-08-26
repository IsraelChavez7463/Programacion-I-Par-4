// Materia: Programación I, Paralelo 4
// Autor: Israel Rodrigo Chavez Villacorta
// Carrera: Ingenieria de Sistemas
// Fecha de Creación: 26/08/2026

#include <iostream>
using namespace std;

int main (){
    int x,y;
    cout << "Ingrese primer valor: "; cin >> x ;
    cout << "Ingrese segundo valor: "; cin >> y;
    if (x > y){
        for (int i = x; i >= y; i--){
            cout << i<< " ";
        }
    }else{
        for (int i = x; i <= y; i++){
            cout << i<< " ";
        }
    }

    return 0;
}