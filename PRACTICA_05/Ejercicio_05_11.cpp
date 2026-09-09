//Materia: Programacion I, Paralelo 4
//Autor: Israel Rodrigo Chavez Villacorta
//Carrera: Ingenieria de Sistemas
//Fecha de Creacoion: 09/09/2026
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int Generarnumeroaleatorio (int min, int max){
    return rand() % (max - min + 1)+ min;
}


int main (){
    int n = 10;
    int numero_aleatorio;
    int sumadepares=0;
    int nrodeimpares=0;
    int sumadeimpares=0;
    double promedioimpar=0;
    int numero_primo=0;
    int maximo = 0;
    int minimo = 1;

    srand(time(NULL));
    for (int i = 1; i<=n ; i++){
        numero_aleatorio = Generarnumeroaleatorio (1,10);
        cout << numero_aleatorio<<" ";

        if (numero_aleatorio % 2 == 0){
            sumadepares+=numero_aleatorio;
        }else{
            nrodeimpares++;
            sumadeimpares +=numero_aleatorio;
            promedioimpar = sumadeimpares /nrodeimpares; 
        }
        
        int es_primo = (numero_aleatorio > 1);
        for (int j = 2; j < numero_aleatorio; j++) {
            if (numero_aleatorio % j == 0) es_primo = 0;
        }

        if (es_primo && numero_aleatorio > maximo){
            maximo = numero_aleatorio;
        }
    }
    cout <<endl;
    cout << "La suma de los pares es: "<<sumadepares<<endl;
    cout << "Hay: "<<nrodeimpares<<" impares"<<endl;
    cout << "EL promedio de los impares es: "<<promedioimpar<<endl;
    cout << "El numero maximo primo es: "<<maximo<<endl;

    return 0;
}