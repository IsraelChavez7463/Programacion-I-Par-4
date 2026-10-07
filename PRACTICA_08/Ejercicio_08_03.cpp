//Materia: Programacion I, Paralelo 4
//Autor: Israel Rodrigo Chavez Villacorta
//Carrera: Ingenieria de Sistemas
//Fecha de Creacion: 07/10/2026
#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using namespace std;

void contadores (vector<char>&x, int &contd, int &contOtros, int &sumaLuhn)
{
    for (int i = 0; i < x.size(); i++)
    {
        if (isdigit(x[i]))
        {
            contd++;
        }
        else
        {
            contOtros++;
        }
    }
    if (contd == x.size())
    {
        bool duplicar = false;
        for (int i = x.size() - 1; i >= 0; i--)
        {
            int digito = x[i] - '0';

            if (duplicar)
            {
                digito = digito * 2;
                if (digito > 9)
                {
                    digito = digito - 9;
                }
            }

            sumaLuhn += digito;
            duplicar = !duplicar; 
        }
    }

    cout<<"Digitos validos: "<<contd<<endl;
    cout<<"Caracteres no numéricos: "<<contOtros<<endl;
    cout<<"Suma acumulada Luhn: "<<sumaLuhn<<endl;
}

void imprimir (vector<char>&x, int contd, int contOtros, int sumaLuhn)
{
    if (x.size() == 16)
    {
        cout<<"Tiene exactamente 16 caracteres"<<endl;
        if (contOtros == 0)
        {
            cout<<"Todos los caracteres son digitos"<<endl;
            if (sumaLuhn % 10 == 0)
            {
                cout<<"La suma es multiplo de 10"<<endl;
                cout<<"TARJETA VALIDA";
            }
            else
            {
                cout<<"Error en el digito de verificacion (Suma no es multiplo de 10)"<<endl;
                cout<<"TARJETA INVALIDA";
            }
        }
        else
        {
            cout<<"Contiene caracteres que no son digitos"<<endl;
            cout<<"TARJETA INVALIDA";
        }
    }
    else
    {
        cout<<"No tiene 16 digitos"<<endl;
        cout<<"TARJETA INVALIDA";
    }
}

int main (){
    string tarjeta;
    int contd = 0;
    int contOtros = 0;
    int sumaLuhn = 0;

    cout<<"ingrese numero de tarjeta de credito (16 digitos): ";
    getline(cin, tarjeta);

    vector<char> numTarjeta(tarjeta.begin(), tarjeta.end());

    contadores (numTarjeta, contd, contOtros, sumaLuhn);
    imprimir (numTarjeta, contd, contOtros, sumaLuhn);

    return 0;
}