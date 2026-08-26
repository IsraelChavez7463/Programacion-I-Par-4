// Materia: Programación I, Paralelo 4
// Autor: Israel Rodrigo Chavez Villacorta
// Carrera: Ingenieria de Sistemas
// Fecha de Creación: 25/08/2026

#include <iostream>
using namespace std;

int main (){
    float temp;
    float media;
    float suma;
    float max,min;
    suma = 0;
   for (int i = 1; i<=6; i++){
    cout << "Ingrese temperatura: "; cin >> temp;
    suma +=temp;

    if (i == 1){
        max = temp;
        min = temp;
    }
    if (temp < min){
        min = temp;
    }
    if(temp > max){
        max = temp;
    } 
    }
media = suma/6;
cout<< "------------------------------"<<endl;
cout << "La temperatura media es: " << media<< endl;
cout << "La temperatura mas alta es: "<<max << endl;
cout << "La temperatura mas baja es: "<<min << endl;

    return 0;
}