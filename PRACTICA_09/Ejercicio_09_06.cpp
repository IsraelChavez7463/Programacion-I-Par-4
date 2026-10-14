// Materia: Programación I, Paralelo 4
// Autor: Israel Rodrigo Chavez Villacorta
// Carrera: Ingenieria de Sistemas
// Fecha de Creación: 14/10/2026

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void temperaturaMasAlta(double temperaturas[4][7]) {
    double maxTemp = temperaturas[0][0];
    int semMax = 0, diaMax = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 7; j++) {
            if (temperaturas[i][j] > maxTemp) {
                maxTemp = temperaturas[i][j];
                semMax = i;
                diaMax = j;
            }
        }
    }

    cout << "\nTemperatura mas alta del mes: " << maxTemp << " C" << endl;
    cout << "Semana: " << semMax + 1 << ", Dia: " << diaMax + 1 << endl;
}

void promedioSemanas(double temperaturas[4][7]) {
    cout << "\nPromedio de temperatura por semana:" << endl;
    for (int i = 0; i < 4; i++) {
        double suma = 0;
        for (int j = 0; j < 7; j++) {
            suma += temperaturas[i][j];
        }
        double promedio = suma / 7.0;
        cout << "Semana " << i + 1 << ": " << promedio << " C" << endl;
    }
}

void diasSuperiores30(double temperaturas[4][7]) {
    int contador = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 7; j++) {
            if (temperaturas[i][j] > 30.0) {
                contador++;
            }
        }
    }
    cout << "\nDias del mes con temperatura superior a 30 C: " << contador << endl;
}

int main() {
    double temperaturas[4][7];
    srand(time(0));

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 7; j++) {
            temperaturas[i][j] = 5 + rand() % 31;
        }
    }

    cout << "Matriz de temperaturas (4 semanas x 7 dias):" << endl;
    for (int i = 0; i < 4; i++) {
        cout << "Semana " << i + 1 << ": ";
        for (int j = 0; j < 7; j++) {
            cout << temperaturas[i][j] << "C  ";
        }
        cout << endl;
    }

    temperaturaMasAlta(temperaturas);
    promedioSemanas(temperaturas);
    diasSuperiores30(temperaturas);

    return 0;
}