// Materia: Programación I, Paralelo 4
// Autor: Israel Rodrigo Chavez Villacorta
// Carrera: Ingenieria de Sistemas
// Fecha de Creación: 24/08/2026

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main (){
    int suma = 0;
    int suma_par=0;
    int suma_impar=0;
    int suma_primos=0;

    srand(time(0));

    for (int i = 1; i <=100 ; i++){

        int n_ale=rand() % (100 - 1 + 1)+ 1;
        // rand() % (MAX - MIN + 1) + MIN


        if (i == 100) {
            cout << n_ale;
        } else {
            cout << n_ale << ", ";
        }


        suma = suma +n_ale;
        if (n_ale % 2 == 0){
            suma_par += n_ale;
        }else{
            suma_impar += n_ale;
        }


        int divisores = 0;
        for (int j = 1; j <= n_ale; j++){
            if (n_ale % j == 0){
                divisores ++;
        }
    }
    if (divisores == 2){
        suma_primos += n_ale;
        }
    }


    cout << endl;
    cout <<"La suma total: "<<suma <<endl;
    cout << "La suma total par: "<<suma_par << endl;
    cout << "La suma total impar: "<<suma_impar << endl;
    cout << "La suma total de nro primos: "<<suma_primos << endl;
    return 0;
}