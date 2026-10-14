// Materia: Programación I, Paralelo 4
// Autor: Israel Rodrigo Chavez Villacorta
// Carrera: Ingenieria de Sistemas
// Fecha de Creación: 14/10/2026

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void buscarPuntoDeSilla(int matriz[100][100], int filas, int columnas) {
    bool encontrado = false;

    for (int i = 0; i < filas; i++) {
        int minFila = matriz[i][0];
        int colMinFila = 0;

        for (int j = 1; j < columnas; j++) {
            if (matriz[i][j] < minFila) {
                minFila = matriz[i][j];
                colMinFila = j;
            }
        }

        bool esMayorEnColumna = true;
        for (int k = 0; k < filas; k++) {
            if (matriz[k][colMinFila] > minFila) {
                esMayorEnColumna = false;
                break;
            }
        }

        if (esMayorEnColumna) {
            cout << "Punto de silla encontrado: " << minFila 
                 << " en la posicion [" << i << "][" << colMinFila << "]" << endl;
            encontrado = true;
        }
    }

    if (!encontrado) {
        cout << "No se encontro ningun punto de silla en la matriz." << endl;
    }
}

int main() {
    int filas, columnas;
    cout << "Ingrese el numero de filas (N): ";
    cin >> filas;
    cout << "Ingrese el numero de columnas (M): ";
    cin >> columnas;

    int matriz[100][100];
    srand(time(0));

    cout << "\nMatriz generada:" << endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz[i][j] = 1 + rand() % 10;
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    cout << endl;
    buscarPuntoDeSilla(matriz, filas, columnas);

    return 0;
}