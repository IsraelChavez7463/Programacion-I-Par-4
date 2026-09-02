// Materia: Programación I, Paralelo 4
// Autor: Israel Rodrigo Chavez Villacorta
// Carrera: Ingenieria de Sistemas
// Fecha de Creación: 31/08/2026
#include <iostream>

using namespace std;

void contador_digitos (int numero){
    int contador = 0;
    int residuo;
    while (numero > 0){
        residuo = numero % 10;
        contador ++;
        cout << residuo << " ";
        numero /=10;
    }
    cout << endl;
    cout << contador;
}
int main (){
    int numero;
    cout << "Ingrese numero: " ; cin >> numero;
    contador_digitos (numero);
    return 0;
}