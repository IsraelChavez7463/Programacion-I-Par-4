// Materia: Programación I, Paralelo 4
// Autor: Israel Rodrigo Chavez Villacorta
// Carrera: Ingenieria de Sistemas
// Fecha de Creación: 14/10/2026

#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Ingrese el orden de la matriz (n): ";
    cin >> n;

    int matriz[100][100];

    for(int i = 0; i < n; i++) {
        int valor = 1 + 2 * i;
        for(int j = 0; j < n; j++) {
            matriz[i][j] = valor;
            valor++;
        }
    }

    cout << "\nmatriz generada:" << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
