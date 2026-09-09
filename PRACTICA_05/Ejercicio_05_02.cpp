// Materia: Programación I, Paralelo 4
// Autor: Israel Rodrigo Chavez Villacorta
// Carrera: Ingenieria de Sistemas
// Fecha de Creación: 07/08/2026

#include <iostream>
using namespace std;
void modificarvalores (int a, int &b){
    a *= 2;
    b += 10;
}
int main (){
    int x = 10;
    int y = 20;
    cout << x << " "<< y <<endl;
    modificarvalores(x,y);
    cout << x << " "<< y <<endl;
}