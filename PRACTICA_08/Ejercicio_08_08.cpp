//Materia: Programacion I, Paralelo 4
//Autor: Israel Rodrigo Chavez Villacorta
//Carrera: Ingenieria de Sistemas
//Fecha de Creacion: 07/10/2026
#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using namespace std;

void contadores (vector<char>&xA, vector<char>&xB, vector<string>&palabrasA, vector<string>&palabrasB, vector<string>&coincidencias, int &contCoincidencias)
{
    string palabraActual = "";
    for (int i = 0; i < xA.size(); i++)
    {
        if (xA[i] != ' ')
        {
            palabraActual += xA[i];
        }
        else
        {
            if (palabraActual.size() > 0)
            {
                palabrasA.push_back(palabraActual);
                palabraActual = "";
            }
        }
    }
    if (palabraActual.size() > 0)
    {
        palabrasA.push_back(palabraActual);
    }

    palabraActual = "";
    for (int i = 0; i < xB.size(); i++)
    {
        if (xB[i] != ' ')
        {
            palabraActual += xB[i];
        }
        else
        {
            if (palabraActual.size() > 0)
            {
                palabrasB.push_back(palabraActual);
                palabraActual = "";
            }
        }
    }
    if (palabraActual.size() > 0)
    {
        palabrasB.push_back(palabraActual);
    }

    for (int i = 0; i < palabrasA.size(); i++)
    {
        for (int j = 0; j < palabrasB.size(); j++)
        {
            if (palabrasA[i] == palabrasB[j])
            {
                bool yaExiste = false;
                for (int k = 0; k < coincidencias.size(); k++)
                {
                    if (coincidencias[k] == palabrasA[i])
                    {
                        yaExiste = true;
                        break;
                    }
                }
                if (!yaExiste)
                {
                    coincidencias.push_back(palabrasA[i]);
                    contCoincidencias++;
                }
                break;
            }
        }
    }

    cout<<"Palabras en Oracion A: "<<palabrasA.size()<<endl;
    cout<<"Palabras en Oracion B: "<<palabrasB.size()<<endl;
    cout<<"Palabras coincidentes: "<<contCoincidencias<<endl;
}

void imprimir (vector<string>&coincidencias, int contCoincidencias)
{
    if (contCoincidencias > 3)
    {
        cout<<"Coinciden en mas de 3 palabras"<<endl;
        cout<<"Coincidencias: (";
        for (int i = 0; i < coincidencias.size(); i++)
        {
            cout<<"\""<<coincidencias[i]<<"\"";
            if (i < coincidencias.size() - 1)
            {
                cout<<", ";
            }
        }
        cout<<")"<<endl;
        cout<<"Alerta de plagio: Verdadero";
    }
    else
    {
        cout<<"No superan el umbral de 3 palabras coincidentes"<<endl;
        cout<<"Alerta de plagio: Falso";
    }
}

int main (){
    string oracionA;
    string oracionB;
    int contCoincidencias = 0;

    cout<<"ingrese Oracion A: ";
    getline(cin, oracionA);

    cout<<"ingrese Oracion B: ";
    getline(cin, oracionB);

    vector<char> charA(oracionA.begin(), oracionA.end());
    vector<char> charB(oracionB.begin(), oracionB.end());

    vector<string> palabrasA;
    vector<string> palabrasB;
    vector<string> coincidencias;

    contadores (charA, charB, palabrasA, palabrasB, coincidencias, contCoincidencias);
    imprimir (coincidencias, contCoincidencias);

    return 0;
}