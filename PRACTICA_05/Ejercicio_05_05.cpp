// Materia: Programación I, Paralelo 4
// Autor: Israel Rodrigo Chavez Villacorta
// Carrera: Ingenieria de Sistemas
// Fecha de Creación: 07/08/2026

#include <iostream>
using namespace std;

double Calculararea (double lado){
    return lado * lado;
}
double Calculararea(double base, double altura){
    return base * altura;
}
float Calculararea(float radio){
    const float pi = 3.1416;
    return pi * (radio*radio);
}

int main (){
    cout << "El area de un cudrado (5.4): "<<Calculararea(5.4)<<endl;
    cout << "El area de un rectangulo (12.45,7.2): "<<Calculararea(12.45,7.2)<<endl;
    cout << "El area de un circulo (19.99): "<<Calculararea(10.1f)<<endl;



    return 0;
}