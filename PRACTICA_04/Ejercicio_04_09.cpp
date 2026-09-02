// Materia: Programación I, Paralelo 4
// Autor: Israel Rodrigo Chavez Villacorta
// Carrera: Ingenieria de Sistemas
// Fecha de Creación: 02/08/2026
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int Generar_aleatorio(int min, int max) {
    return rand() % (max - min + 1) + min;
}

int main () {
    int n;
    cout << "Ingrese numero de estudiantes: "; 
    cin >> n;
    
    float cont_aprobados = 0;
    float cont_reprobados = 0;
    float suma = 0;
    srand(time(0));

    for (int i = 1; i <= n; i++) {
        cout << "Estudiante " << i << ":" << endl;
        int parcial1 = Generar_aleatorio(0, 100);
        int parcial2 = Generar_aleatorio(0, 100);
        int parcial3 = Generar_aleatorio(0, 100);
        
        float promedio_parcial = (parcial1 + parcial2 + parcial3) / 3.0;
        
        cout << "\tNota Parcial 1: " << parcial1 << endl;
        cout << "\tNota Parcial 2: " << parcial2 << endl;
        cout << "\tNota Parcial 3: " << parcial3 << endl;
        cout << "\tPromedio parcial: " << promedio_parcial << endl;

        float nota_final = 0;
        int examen_final = 0;

        if (parcial1 >= 60 && parcial2 >= 60 && parcial3 >= 60) {
            examen_final = Generar_aleatorio(0, 100);
            nota_final = (promedio_parcial * 0.5) + (examen_final * 0.5);
            
            cout << "Nota examen final: " << examen_final << endl;
            cout << "NOTA FINAL: " << nota_final << endl;

            if (nota_final >= 51) {
                cout << "Estado: APROBADO" << endl;
                cont_aprobados++;
            } else {
                cout << "Estado: REPROBADO" << endl;
            }
        } else {
            examen_final = 0;
            nota_final = (promedio_parcial * 0.5); 
            
            cout << "Nota examen final: " << examen_final << endl;
            cout << "NOTA FINAL: " << nota_final << endl;
            cout << "Estado: No aprobo para dar examen final, REPROBADO" << endl;
        }

        suma += nota_final;
        cout << "-------------------------------" << endl;
    }

    cont_reprobados = n - cont_aprobados;
    float porcentaje_aprobado = (cont_aprobados / n) * 100;
    float porcentaje_reprobado = (cont_reprobados / n) * 100;

    cout << "Porcentaje de aprobados: " << porcentaje_aprobado << "%" << endl;
    cout << "Porcentaje de reprobados: " << porcentaje_reprobado << "%" << endl;
    cout << "Promedio de notas finales: " << suma / n << endl;

    return 0;
}