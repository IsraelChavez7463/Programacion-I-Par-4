// Materia: Programación I, Paralelo 4
// Autor: Israel Rodrigo Chavez Villacorta
// Carrera: Ingenieria de Sistemas
// Fecha de Creación: 07/08/2026

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int Generarnumerosaleatorios(int min, int max){
    return rand () % (max - min + 1 )+min;
}
int main(){
    srand(time(0));
    int numero;
    numero = Generarnumerosaleatorios (1,10);
    int factorial = 1;
    for (int i = 1; i<=numero ; i++){
        factorial *=i;
    }
    cout << "Numero: "<<numero<<endl;
    cout << "Factorial calculado: "<<factorial<<endl;
    

    return 0;
}