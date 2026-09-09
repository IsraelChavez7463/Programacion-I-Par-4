// Materia: Programación I, Paralelo 4
// Autor: Israel Rodrigo Chavez Villacorta
// Carrera: Ingenieria de Sistemas
// Fecha de Creación: 07/08/2026

#include <iostream>
using namespace std;

void Calculartiempo (int &Totalsegundos, int &horas, int &minutos, int &segundos){
    horas = Totalsegundos / 3600;
    int sobrante = Totalsegundos % 3600;
    minutos = sobrante / 60;
    segundos = sobrante % 60;
}

int main(){
    int Totalsegundos = 0;
    cout << "Ingrese segundos: ";cin >> Totalsegundos;
    int horas = 0;
    int minutos = 0;
    int segundos = 0;
    Calculartiempo (Totalsegundos,horas,minutos,segundos);
    cout << "Horas: "<<horas<<endl;
    cout << "Minutos: "<<minutos<<endl;
    cout << "Segundos: "<<segundos<<endl;
    return 0;
}