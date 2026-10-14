// Materia: Programación I, Paralelo 4
// Autor: Israel Rodrigo Chavez Villacorta
// Carrera: Ingenieria de Sistemas
// Fecha de Creación: 14/10/2026

#include <iostream>

using namespace std;

void mostrarSala(int sala[5][5]) {
    cout << "\n--- ESTADO DE LA SALA VIP ---" << endl;
    cout << "  ";
    for (int j = 0; j < 5; j++) {
        cout << j + 1 << " ";
    }
    cout << endl;
    for (int i = 0; i < 5; i++) {
        cout << i + 1 << " ";
        for (int j = 0; j < 5; j++) {
            if (sala[i][j] == 0) {
                cout << "L ";
            } else {
                cout << "O ";
            }
        }
        cout << endl;
    }
}

void comprarEntrada(int sala[5][5]) {
    int fila, asiento;
    cout << "\nIngrese la fila (1-5): ";
    cin >> fila;
    cout << "Ingrese el asiento (1-5): ";
    cin >> asiento;

    if (fila >= 1 && fila <= 5 && asiento >= 1 && asiento <= 5) {
        if (sala[fila - 1][asiento - 1] == 0) {
            sala[fila - 1][asiento - 1] = 1;
            cout << "Reserva exitosa" << endl;
        } else {
            cout << "Asiento no disponible" << endl;
        }
    } else {
        cout << "Fila o asiento invalido." << endl;
    }
}

void mostrarEstadisticas(int sala[5][5]) {
    int libres = 0;
    int ocupados = 0;
    int total = 25;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (sala[i][j] == 0) {
                libres++;
            } else {
                ocupados++;
            }
        }
    }

    double porcentajeLibres = (double)libres / total * 100;
    double porcentajeOcupados = (double)ocupados / total * 100;

    cout << "\n--- ESTADISTICAS ---" << endl;
    cout << "Asientos libres: " << libres << " (" << porcentajeLibres << "%)" << endl;
    cout << "Asientos ocupados: " << ocupados << " (" << porcentajeOcupados << "%)" << endl;
}

int main() {
    int sala[5][5] = {0};
    int opcion;

    do {
        cout << "\n--- MENU CINE VIP ---" << endl;
        cout << "1. Mostrar la sala" << endl;
        cout << "2. Comprar entrada" << endl;
        cout << "3. Estadisticas" << endl;
        cout << "4. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                mostrarSala(sala);
                break;
            case 2:
                comprarEntrada(sala);
                break;
            case 3:
                mostrarEstadisticas(sala);
                break;
            case 4:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opcion invalida." << endl;
        }
    } while (opcion != 4);

    return 0;
}