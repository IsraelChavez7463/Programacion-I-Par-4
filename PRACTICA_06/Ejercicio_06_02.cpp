//Materia: Programacion I, Paralelo 4
//Autor: Israel Rodrigo Chavez Villacorta
//Carrera: Ingenieria de Sistemas
//Fecha de Creacion: 09/09/2026
#include <iostream>

using namespace std;

void calc_anios(int totalDias, int &anio, int &mes, int &dia) {
    anio = 2000 + (totalDias / 365);
    int diasRestantes = totalDias % 365;

    mes = 1 + (diasRestantes / 30);
    dia = 1 + (diasRestantes % 30);
}

int main() {
    int totalDias;
    int anio = 0, mes = 0, dia = 0;

    cout << "Ingrese el numero total de dias transcurridos desde el 1/1/2000: ";
    cin >> totalDias;

    calc_anios(totalDias, anio, mes, dia);

    cout << "\nFecha calculada (DD/MM/AAAA): " << dia << "/" << mes << "/" << anio << endl;

    return 0;
}