// Materia: Programación I, Paralelo 4
// Autor: Israel Rodrigo Chavez Villacorta
// Carrera: Ingenieria de Sistemas
// Fecha de Creación: 07/08/2026
#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int Generarnumeroaleatorio(int min, int max){
    return rand() % (max - min + 1)+ min;
}
int esPrimo(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}



int main (){
    int n;
    cout << "Ingrese numero: ";cin >> n;
    int primo = 0;
    int suma = 0;
    srand(time(0));
    for (int i = 1; i <= n; i++){
        int numero_Ale = Generarnumeroaleatorio (1,10000);
        cout << numero_Ale<<" ";
        primo = esPrimo(numero_Ale);
        cout << primo<<" "<<endl;
        suma += primo;
    }
    cout <<"---------------------------"<<endl;
    cout <<"Numeros primos encontrados: "<<suma<<endl;
        
    
    return 0;
}