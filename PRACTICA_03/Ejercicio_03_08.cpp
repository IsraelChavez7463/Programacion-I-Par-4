// Materia: Programación I, Paralelo 4
// Autor: Israel Rodrigo Chavez Villacorta
// Carrera: Ingenieria de Sistemas
// Fecha de Creación: 26/08/2026
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main() {
    srand(time(0));

    int n;
    cout << "Ingrese la cantidad total de productos vendidos en el dia: ";
    cin >> n;

    double total_dia = 0;
    double total_iva = 0;
    double total_descuento = 0;
    double mas_caro = 0;
    double mas_barato = 0;

    for (int i = 0; i < n; i++) {
        double precio_base = rand() % 9991 + 10;

        double descuento = 0;
        if (precio_base > 2500) {
            descuento = precio_base * 0.05;
        }

        double precio_final = precio_base - descuento;
        double utilidad = precio_final * 0.87;
        double iva = precio_final * 0.13;

        total_dia = total_dia + precio_final;
        total_iva = total_iva + iva;
        total_descuento = total_descuento + descuento;

        if (i == 0) {
            mas_caro = precio_final;
            mas_barato = precio_final;
        } else {
            if (precio_final > mas_caro) {
                mas_caro = precio_final;
            }
            if (precio_final < mas_barato) {
                mas_barato = precio_final;
            }
        }
    }

    cout << fixed << setprecision(2);
    cout << "\n--- REPORTE CONSOLIDADO DEL DIA ---\n";
    cout << "Suma total del dinero ingresado: " << total_dia << " Bs.\n";
    cout << "Monto total acumulado de IVA (13%): " << total_iva << " Bs.\n";
    cout << "Monto total descontado a clientes: " << total_descuento << " Bs.\n";
    cout << "Producto mas caro vendido: " << mas_caro << " Bs.\n";
    cout << "Producto mas barato vendido: " << mas_barato << " Bs.\n";

    return 0;
}