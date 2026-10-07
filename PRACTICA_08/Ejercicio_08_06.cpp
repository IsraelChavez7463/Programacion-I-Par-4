//Materia: Programacion I, Paralelo 4
//Autor: Israel Rodrigo Chavez Villacorta
//Carrera: Ingenieria de Sistemas
//Fecha de Creacion: 07/10/2026

#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using namespace std;

void contadores (vector<char>&x, vector<char>&resultado, int &contEspaciosEliminados, int &contLetras)
{
    int inicio = 0;
    int fin = x.size() - 1;

    while (inicio <= fin && x[inicio] == ' ')
    {
        inicio++;
        contEspaciosEliminados++;
    }

    while (fin >= inicio && x[fin] == ' ')
    {
        fin--;
        contEspaciosEliminados++;
    }

    bool espacioPrevio = false;

    for (int i = inicio; i <= fin; i++)
    {
        if (x[i] == ' ')
        {
            if (!espacioPrevio)
            {
                resultado.push_back(x[i]);
                espacioPrevio = true;
            }
            else
            {
                contEspaciosEliminados++;
            }
        }
        else
        {
            resultado.push_back(x[i]);
            espacioPrevio = false;
            contLetras++;
        }
    }

    cout<<"Caracteres utiles (sin espacios extra): "<<contLetras<<endl;
    cout<<"Espacios redundantes eliminados: "<<contEspaciosEliminados<<endl;
}

void imprimir (vector<char>&resultado, int contLetras)
{
    if (contLetras > 0)
    {
        cout<<"Cadena limpiada correctamente"<<endl;
        cout<<"Resultado: \"";
        for (int i = 0; i < resultado.size(); i++)
        {
            cout<<resultado[i];
        }
        cout<<"\""<<endl;
        cout<<"LIMPIEZA EXITOSA";
    }
    else
    {
        cout<<"La cadena solo contenia espacios en blanco o estaba vacia"<<endl;
        cout<<"CADENA INVALIDA";
    }
}

int main (){
    string texto;
    int contEspaciosEliminados = 0;
    int contLetras = 0;

    cout<<"ingrese texto con espacios: ";
    getline(cin, texto);

    vector<char> textoChar(texto.begin(), texto.end());
    vector<char> textoLimpio;

    contadores (textoChar, textoLimpio, contEspaciosEliminados, contLetras);
    imprimir (textoLimpio, contLetras);

    return 0;
}