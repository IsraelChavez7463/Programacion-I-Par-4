// Materia: Programación I, Paralelo 4
// Autor: Israel Rodrigo Chavez Villacorta
// Carrera: Ingenieria de Sistemas
// Fecha de Creación: 24/08/2026
#include <iostream>
using namespace std;

int main (){
    int acumulador=0;
    int n;
    do{
        cout << "Ingrese numero: ";cin>>n;
        acumulador ++;
    }while (n > 0);

    cout << "SE INGRESARON: "<< acumulador - 1<<" numeros";

    return 0;
}