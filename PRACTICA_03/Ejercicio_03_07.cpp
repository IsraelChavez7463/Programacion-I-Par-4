// Materia: Programación I, Paralelo 4
// Autor: Israel Rodrigo Chavez Villacorta
// Carrera: Ingenieria de Sistemas
// Fecha de Creación: 26/08/2026

#include <iostream>
using namespace std;

int main (){
    int n;
    int suma=0;
    cout << "-----------------------------------" << endl;
    cout << "Evaluacion de numeros perfectos"<< endl;
    cout << "Ingrese numero: "; cin >> n;
    for (int i = 1; i <= n; i++){
        if (i % n == 0){
            suma +=i;
        }
    }
    if (n == suma){
        cout << "El numero es perfecto";
    }else{
        cout << "El numero no es perfeto";
    }
    return 0;
}