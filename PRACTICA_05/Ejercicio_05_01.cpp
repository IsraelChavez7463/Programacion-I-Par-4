// Materia: Programación I, Paralelo 4
// Autor: Israel Rodrigo Chavez Villacorta
// Carrera: Ingenieria de Sistemas
// Fecha de Creación: 07/08/2026

#include <iostream>
using namespace std;

void intercambiarvalores (int &a, int &b){
    int temporal = a;
    a = b;
    b = temporal;
}

int main (){   
    int x = 10;
    int y = 50; 
    cout << x << " " << y <<endl;
    intercambiarvalores(x,y);
    cout << x << " "<<y <<endl;


    return 0;
}

