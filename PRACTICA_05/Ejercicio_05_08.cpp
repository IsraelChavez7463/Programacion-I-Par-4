// Materia: Programación I, Paralelo 4
// Autor: Israel Rodrigo Chavez Villacorta
// Carrera: Ingenieria de Sistemas
// Fecha de Creación: 09/08/2026

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int Generarnumeroaleatorio(int min, int max){
    return rand() % (max - min + 1)+min;
}

int main (){
    srand(time(0));
    int n;
    int moneda;
    float cara = 0;
    float cruz = 0;
    cout << "Introduzca el numerod de tiros de moneda: "; cin >>n;
    for (int i=1; i <=n; i++){
        moneda = Generarnumeroaleatorio (0,1);
        if (moneda == 1 ){
            cara ++;
        }else{
            cruz ++;
        }
    }
    cout << "Cara: "<<(cara/n)*100<<"%"<<endl;
    cout << "Cruz: "<<(cruz/n)*100<<"%"<<endl;

    return 0;

}