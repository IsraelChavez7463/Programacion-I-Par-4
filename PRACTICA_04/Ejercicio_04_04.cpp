// Materia: Programación I, Paralelo 4
// Autor: Israel Rodrigo Chavez Villacorta
// Carrera: Ingenieria de Sistemas
// Fecha de Creación: 31/08/2026
#include <iostream>

using namespace std;

float calcular_divisa(int cambio_bolivianos){
    const float cambio_dolar = 12.02;
    return cambio_bolivianos * cambio_dolar;
}

int main (){
    int cambio_bolivianos;
    cout <<"Ingrese cambio en bolivianos: "; cin >> cambio_bolivianos;
    cout << "El cambio es de: "<<calcular_divisa (cambio_bolivianos)<<" $";


    return 0;
}
