//Materia: Programacion I, Paralelo 4
//Autor: Israel Rodrigo Chavez Villacorta
//Carrera: Ingenieria de Sistemas
//Fecha de Creacion: 07/10/2026
#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using namespace std;

void contadores (vector<string>&contactos, vector<char>&prefijoChar, vector<string>&resultados, int &contCoincidencias, int &contEvaluados)
{
    string prefijoLower = "";
    for (int i = 0; i < prefijoChar.size(); i++)
    {
        prefijoLower += tolower(prefijoChar[i]);
    }

    for (int i = 0; i < contactos.size(); i++)
    {
        contEvaluados++;
        string contactoActual = contactos[i];

        if (contactoActual.size() >= prefijoLower.size())
        {
            bool coincide = true;
            for (int j = 0; j < prefijoLower.size(); j++)
            {
                if (tolower(contactoActual[j]) != prefijoLower[j])
                {
                    coincide = false;
                    break;
                }
            }

            if (coincide)
            {
                resultados.push_back(contactoActual);
                contCoincidencias++;
            }
        }
    }

    cout<<"Contactos evaluados: "<<contEvaluados<<endl;
    cout<<"Coincidencias encontradas: "<<contCoincidencias<<endl;
}

void imprimir (vector<string>&resultados, int contCoincidencias)
{
    if (contCoincidencias > 0)
    {
        cout<<"Busqueda completada con exito"<<endl;
        cout<<"Resultados: ";
        for (int i = 0; i < resultados.size(); i++)
        {
            cout<<resultados[i];
            if (i < resultados.size() - 1)
            {
                cout<<", ";
            }
        }
        cout<<endl;
        cout<<"BUSQUEDA EXITOSA";
    }
    else
    {
        cout<<"No se encontraron contactos con el prefijo ingresado"<<endl;
        cout<<"SIN RESULTADOS";
    }
}

int main (){
    vector<string> contactos;
    contactos.push_back("Marcelo");
    contactos.push_back("Maria");
    contactos.push_back("Martin");
    contactos.push_back("Juan");
    contactos.push_back("Marcos");

    string prefijo;
    int contCoincidencias = 0;
    int contEvaluados = 0;

    cout<<"ingrese prefijo de busqueda: ";
    getline(cin, prefijo);

    vector<char> prefijoChar(prefijo.begin(), prefijo.end());
    vector<string> resultados;

    contadores (contactos, prefijoChar, resultados, contCoincidencias, contEvaluados);
    imprimir (resultados, contCoincidencias);

    return 0;
}