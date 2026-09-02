// Materia: Programación I, Paralelo 4
// Autor: Israel Rodrigo Chavez Villacorta
// Carrera: Ingenieria de Sistemas
// Fecha de Creación: 31/08/2026

#include <iostream>
using namespace std;

int calc_mayor (int a,int b,int c){
    if (a >= b && c){
        return a;
    }else if (b >=c){
        return b;
    }else{
        return c;
    }
}

int main (){
    int a,b,c;
    cout << "Ingrese 1er numero: "; cin >> a;
    cout << "Ingrese 2do numero: "; cin >> b;
    cout << "Ingrese 3er numero: "; cin >> c;
    cout << "El numero mayor es: "<<calc_mayor(a,b,c);
    return 0;
}