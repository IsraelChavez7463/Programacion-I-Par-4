// Materia: Programación I, Paralelo 4
// Autor: Israel Rodrigo Chavez Villacorta
// Carrera: Ingenieria de Sistemas
// Fecha de Creación: 14/10/2026

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int n, a, b;
    cout << "Ingrese el orden de la matriz (N): ";
    cin >> n;
    cout << "Ingrese el limite inferior (A): ";
    cin >> a;
    cout << "Ingrese el limite superior (B): ";
    cin >> b;

    int matriz[100][100];
    srand(time(0));

    cout << "\nMatriz generada:" << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            matriz[i][j] = a + rand() % (b - a + 1);
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    int sumaUltimaColumna = 0;
    for(int i = 0; i < n; i++) {
        sumaUltimaColumna += matriz[i][n - 1];
    }

    long long productoUltimaFila = 1;
    for(int j = 0; j < n; j++) {
        productoUltimaFila *= matriz[n - 1][j];
    }

    int mayor = matriz[0][0];
    int filaMayor = 0, colMayor = 0;
    int sumaTotal = 0;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            sumaTotal += matriz[i][j];
            if(matriz[i][j] > mayor) {
                mayor = matriz[i][j];
                filaMayor = i;
                colMayor = j;
            }
        }
    }

    double promedio = (double)sumaTotal / (n * n);

    cout << "\nResultados:" << endl;
    cout << "1. Suma de la ultima columna: " << sumaUltimaColumna << endl;
    cout << "2. Producto total de la ultima fila: " << productoUltimaFila << endl;
    cout << "3. Mayor valor: " << mayor << " en la posicion [" << filaMayor << "][" << colMayor << "]" << endl;
    cout << "4. Promedio de los elementos: " << promedio << endl;

    return 0;
}