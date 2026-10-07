//Materia: Programacion I, Paralelo 4
//Autor: Israel Rodrigo Chavez Villacorta
//Carrera: Ingenieria de Sistemas
//Fecha de Creacion: 07/10/2026
#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using namespace std;

void contadores (vector<char>&x, vector<string>&hashtags, int &contHashtags, int &contLetras)
{
    for (int i = 0; i < x.size(); i++)
    {
        if (x[i] == '#')
        {
            string hashtagActual = "#";
            int j = i + 1;

            while (j < x.size() && x[j] != ' ' && !ispunct(x[j]))
            {
                hashtagActual += x[j];
                j++;
            }

            if (hashtagActual.size() > 1)
            {
                hashtags.push_back(hashtagActual);
                contHashtags++;
                i = j - 1;
            }
        }
        else
        {
            contLetras++;
        }
    }

    cout<<"Hashtags encontrados: "<<contHashtags<<endl;
    cout<<"Otros caracteres: "<<contLetras<<endl;
}

void imprimir (vector<string>&hashtags, int contHashtags)
{
    if (contHashtags > 0)
    {
        cout<<"Extraccion completada con exito"<<endl;
        cout<<"Lista de hashtags: [";
        for (int i = 0; i < hashtags.size(); i++)
        {
            cout<<hashtags[i];
            if (i < hashtags.size() - 1)
            {
                cout<<", ";
            }
        }
        cout<<"]"<<endl;
        cout<<"EXTRACCION EXITOSA";
    }
    else
    {
        cout<<"No se encontraron hashtags en la publicacion"<<endl;
        cout<<"PUBLICACION SIN HASHTAGS";
    }
}

int main (){
    string texto;
    int contHashtags = 0;
    int contLetras = 0;

    cout<<"ingrese tweet o publicacion: ";
    getline(cin, texto);

    vector<char> textoChar(texto.begin(), texto.end());
    vector<string> listaHashtags;

    contadores (textoChar, listaHashtags, contHashtags, contLetras);
    imprimir (listaHashtags, contHashtags);

    return 0;
}