//Materia: Programacion I, Paralelo 4
//Autor: Israel Rodrigo Chavez Villacorta
//Carrera: Ingenieria de Sistemas
//Fecha de Creacion: 09/09/2026
#include <iostream>

using namespace std;

// Función para calcular el cambio en el menor número de billetes posible usando referencias
void cambio(int monto, int &cien, int &cincuenta, int &veinte, int &diez, int &cinco, int &uno) {
    cien = monto / 100;
    monto %= 100;
    cincuenta = monto / 50;
    monto %= 50;
    veinte = monto / 20;
    monto %= 20;
    diez = monto / 10;
    monto %= 10;
    cinco = monto / 5;
    monto %= 5;
    uno = monto;
}

int main() {
    int monto;
    int cien = 0, cincuenta = 0, veinte = 0, diez = 0, cinco = 0, uno = 0;

    cout << "Ingrese la cantidad en dolares: ";
    cin >> monto;

    cambio(monto, cien, cincuenta, veinte, diez, cinco, uno);

    cout << "\n--- DESGLOSE DE BILLETES ---" << endl;
    cout << "Billetes de 100: " << cien << endl;
    cout << "Billetes de 50:  " << cincuenta << endl;
    cout << "Billetes de 20:  " << veinte << endl;
    cout << "Billetes de 10:  " << diez << endl;
    cout << "Billetes de 5:   " << cinco << endl;
    cout << "Billetes de 1:   " << uno << endl;

    return 0;
}