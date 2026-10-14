// Materia: Programación I, Paralelo 4
// Autor: Israel Rodrigo Chavez Villacorta
// Carrera: Ingenieria de Sistemas
// Fecha de Creación: 14/10/2026

#include <iostream>

using namespace std;

int main() {
    int m, n;
    cout << "Ingrese el numero de filas: ";
    cin >> m;
    cout << "Ingrese el numero de columnas: ";
    cin >> n;

    int a[100][100];
    cout << "Ingrese los elementos de la matriz:" << endl;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout << "Matriz[" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
    }

    for(int j = 0; j < n; j++) {
        int aux = a[0][j];
        a[0][j] = a[m - 1][j];
        a[m - 1][j] = aux;
    }

    cout << "\nMatriz resultante:" << endl;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}