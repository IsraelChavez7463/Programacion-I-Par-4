// Materia: Programación I, Paralelo 4
// Autor: Israel Rodrigo Chavez Villacorta
// Carrera: Ingenieria de Sistemas
// Fecha de Creación: 25/08/2026

#include <iostream>
using namespace std;

int main (){
    int n ;
    long double factorial = 1;
    cout << "Ingrese un numero entero: ";cin >> n;
    long double suma = 0;
    for (int i = 1; i<=n ; i++){

        if (i == n){
            cout << i<<"!";
        }else{
            cout << i<<"! + ";
        }
            factorial *= i;

        suma += factorial;
    }
cout <<endl;
cout << "La suma total es: "<<suma;
    return 0;
}