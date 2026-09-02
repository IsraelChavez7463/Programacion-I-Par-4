// Materia: Programación I, Paralelo 4
// Autor: Israel Rodrigo Chavez Villacorta
// Carrera: Ingenieria de Sistemas
// Fecha de Creación: 31/08/2026
#include <iostream>

using namespace std;

int calcular_distancia(int velocidad, int tiempo){
    return (velocidad * tiempo);
}

int main (){
    int velocidad;
    int tiempo;
    cout <<"Ingrese velocidad: "; cin >> velocidad;
    cout <<"Ingrese tiempo: "; cin >> tiempo;
    cout << "La distancia es: "<<calcular_distancia (velocidad,tiempo);


    return 0;
}
