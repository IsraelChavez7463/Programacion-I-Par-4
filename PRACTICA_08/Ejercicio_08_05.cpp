//Materia: Programacion I, Paralelo 4
//Autor: Israel Rodrigo Chavez Villacorta
//Carrera: Ingenieria de Sistemas
//Fecha de Creacion: 07/10/2026
#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using namespace std;

void contadores (vector<char>&x, string &protocolo, string &dominio, string &ruta, int &contPartes)
{
    string urlTexto(x.begin(), x.end());

    size_t posProtocolo = urlTexto.find("://");

    if (posProtocolo != string::npos)
    {
        protocolo = urlTexto.substr(0, posProtocolo);
        contPartes++;

        size_t inicioDominio = posProtocolo + 3; 
        size_t posRuta = urlTexto.find("/", inicioDominio);

        if (posRuta != string::npos)
        {
            dominio = urlTexto.substr(inicioDominio, posRuta - inicioDominio);
            ruta = urlTexto.substr(posRuta);
            contPartes += 2;
        }
        else
        {
            dominio = urlTexto.substr(inicioDominio);
            ruta = "/";
            contPartes += 2;
        }
    }

    cout<<"Componentes extraidos correctamente: "<<contPartes<<endl;
}

void imprimir (vector<char>&x, string protocolo, string dominio, string ruta, int contPartes)
{
    if (x.size() > 0)
    {
        cout<<"URL procesada exitosamente"<<endl;
        if (contPartes == 3)
        {
            cout<<"Se encontraron las 3 partes fundamentales de la URL"<<endl;
            cout<<"Protocolo: "<<protocolo<<endl;
            cout<<"Dominio: "<<dominio<<endl;
            cout<<"Ruta: "<<ruta<<endl;
            cout<<"EXTRACCION EXITOSA";
        }
        else
        {
            cout<<"No se pudo identificar la estructura valida de la URL"<<endl;
            cout<<"URL INVALIDA";
        }
    }
    else
    {
        cout<<"La URL ingresada esta vacia"<<endl;
        cout<<"URL INVALIDA";
    }
}

int main (){
    string url;
    string protocolo = "";
    string dominio = "";
    string ruta = "";
    int contPartes = 0;

    cout<<"ingrese URL: ";
    getline(cin, url);

    vector<char> urlChar(url.begin(), url.end());

    contadores (urlChar, protocolo, dominio, ruta, contPartes);
    imprimir (urlChar, protocolo, dominio, ruta, contPartes);

    return 0;
}