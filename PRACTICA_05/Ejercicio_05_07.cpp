// Materia: Programación I, Paralelo 4
// Autor: Israel Rodrigo Chavez Villacorta
// Carrera: Ingenieria de Sistemas
// Fecha de Creación: 07/08/2026

#include <iostream>
#include <iomanip>

using namespace std;

void agregarNota(double &sumaTotal, int &cantidadNotas, double nuevaNota) {
    sumaTotal += nuevaNota;
    cantidadNotas++;
}

int main() {
    double sumaTotal = 0.0;
    int cantidadNotas = 0;
    int n;

    cout << "Ingrese la cantidad de notas a registrar: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        double nota;
        cout << "Ingrese la nota " << i << ": ";
        cin >> nota;
        
        agregarNota(sumaTotal, cantidadNotas, nota);
    }

    cout << fixed << setprecision(2);
    cout << "\n--- RESULTADOS ---" << endl;
    cout << "Suma total: " << sumaTotal << endl;
    cout << "Cantidad de notas: " << cantidadNotas << endl;

    if (cantidadNotas > 0) {
        double promedio = sumaTotal / cantidadNotas;
        cout << "promedio: " << promedio << endl;
    } else {
        cout << "No se ingresaron notas" << endl;
    }

    return 0;
}