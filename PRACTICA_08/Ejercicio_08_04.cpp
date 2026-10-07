//Materia: Programacion I, Paralelo 4
//Autor: Israel Rodrigo Chavez Villacorta
//Carrera: Ingenieria de Sistemas
//Fecha de Creacion: 07/10/2026
#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using namespace std;

void contadores (vector<char>&x, vector<string>&prohibidas, int &contProhibidas, int &contReemplazos)
{
    string mensajeTexto(x.begin(), x.end());

    for (int i = 0; i < prohibidas.size(); i++)
    {
        string palabra = prohibidas[i];
        size_t pos = mensajeTexto.find(palabra);

        while (pos != string::npos)
        {
            contProhibidas++;

            for (int j = 0; j < palabra.length(); j++)
            {
                x[pos + j] = '*';
                contReemplazos++;
            }
            pos = mensajeTexto.find(palabra, pos + palabra.length());
        }
    }

    cout<<"Palabras prohibidas detectadas: "<<contProhibidas<<endl;
    cout<<"Caracteres censurados (*): "<<contReemplazos<<endl;
}

void imprimir (vector<char>&x, int contProhibidas)
{
    if (x.size() > 0)
    {
        cout<<"Mensaje procesado correctamente"<<endl;
        if (contProhibidas > 0)
        {
            cout<<"El mensaje contenia lenguaje no permitido (palabras censuradas)"<<endl;
        }
        else
        {
            cout<<"El mensaje esta limpio de palabras prohibidas"<<endl;
        }

        cout<<"MENSAJE FINAL: ";
        for (int i = 0; i < x.size(); i++)
        {
            cout<<x[i];
        }
        cout<<endl;
    }
    else
    {
        cout<<"El mensaje esta vacio"<<endl;
        cout<<"MENSAJE INVALIDO";
    }
}

int main (){
    string mensaje;
    int contProhibidas = 0;
    int contReemplazos = 0;

    vector<string> palabrasProhibidas;
    palabrasProhibidas.push_back("tonto");
    palabrasProhibidas.push_back("manco");
    palabrasProhibidas.push_back("noob");

    cout<<"ingrese el mensaje del jugador: ";
    getline(cin, mensaje);

    vector<char> mensajeChar(mensaje.begin(), mensaje.end());

    contadores (mensajeChar, palabrasProhibidas, contProhibidas, contReemplazos);
    imprimir (mensajeChar, contProhibidas);

    return 0;
}