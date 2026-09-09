// Materia: Programación I, Paralelo 4
// Autor: Israel Rodrigo Chavez Villacorta
// Carrera: Ingenieria de Sistemas
// Fecha de Creación: 07/08/2026

#include <iostream>
using namespace std;

float CalcularPrecioTotal (int &precio){
    const float iva = 0.13;
    int porcentaje_iva = precio *0.13;
    int precioconIVA = precio + porcentaje_iva;
    return precioconIVA;
}

int main (){
    int precio;
    cout << "Ingrese precio del producto: "; cin >> precio;
    cout << "El precio original es: "<<precio<< endl;
    cout << "El precio con IVA es: "<< CalcularPrecioTotal (precio)<<endl;
    return 0;
}