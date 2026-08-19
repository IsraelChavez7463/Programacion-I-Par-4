// Materia: Programación I, Paralelo 4
// Autor: Israel Rodrigo Chavez Villacorta
// Carrera: Ingenieria de Sistemas
// Fecha de Creación: 19/08/2026
#include <iostream>
#include <string>
using namespace std;

int main() {
    string numero;
    cin >> numero;
    for (char c : numero) {
        int d = c - '0';
        
        cout << d << "x" << d << ":" << endl;

        if (d == 0) {
            cout << endl;
        } else {
            for (int i = 0; i < d; i++) {
                for (int j = 0; j < d; j++) {
                    cout << d << " ";
                }
                cout << endl;
            }
        }
        cout << endl;
    }

    return 0;
}