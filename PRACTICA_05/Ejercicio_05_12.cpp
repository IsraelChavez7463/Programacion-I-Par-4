//Materia: Programacion I, Paralelo 4
//Autor: Israel Rodrigo Chavez Villacorta
//Carrera: Ingenieria de Sistemas
//Fecha de Creacion: 09/09/2026

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int Generarnumeroaleatorio(int min, int max) {
    return rand() % (max - min + 1) + min;
}

int main() {
    int N;
    cout << "Ingrese la cantidad total de ninos (N): ";
    cin >> N;

    srand(time(NULL));

    int ninos1 = Generarnumeroaleatorio(0, N);

    int ninos2 = Generarnumeroaleatorio(0, N - ninos1);

    int ninos3 = Generarnumeroaleatorio(0, N - ninos1 - ninos2);

    int total_panales = (ninos1 * 6) + (ninos2 * 3) + (ninos3 * 2);

    cout << "\nNinos de 1 ano: " << ninos1 << " (Consumo: " << ninos1 * 6 << " panales)" << endl;
    cout << "Ninos de 2 anos: " << ninos2 << " (Consumo: " << ninos2 * 3 << " panales)" << endl;
    cout << "Ninos de 3 anos: " << ninos3 << " (Consumo: " << ninos3 * 2 << " panales)" << endl;
    cout << "Total de ninos evaluados: " << ninos1 + ninos2 + ninos3 << " de " << N << endl;
    cout << "El consumo total es de: " << total_panales << " PANALES" << endl;

    return 0;
}