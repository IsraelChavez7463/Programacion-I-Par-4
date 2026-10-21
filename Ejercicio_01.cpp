//Materia: Programacion I, Paralelo 4
//Autor: Israel Rodrigo Chavez Villacorta
//Carrera: Ingenieria de Sistemas
//Fecha de Creacion: 28/09/2026
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;
float Generarnumeroale(float min, float max)
{
    return min + (float)rand() / RAND_MAX * (max - min);
}

void funcionvoltajes (int numero)
{
    vector <float> voltajes (10);
    for (int i = 0; i<  voltajes.size(); i++)
    {
        voltajes [i]= Generarnumeroale(20,200);
        cout<<voltajes[i]<<endl;
        
    }
}
void funciontemperaturas (int numero)
{
    vector <float> temperatura (5);
    for (int i = 0; i<  temperatura.size(); i++)
    {
        temperatura [i]= Generarnumeroale(0,100);
        cout<<temperatura[i]<<endl;
        
    }
}
void funcionalfanumerico(int numero)
{
    vector <char> alfanumerico (3);
    for (int i = 0; i<  alfanumerico.size(); i++)
    {
        alfanumerico [i]= Generarnumeroale(32,255);
        cout<<alfanumerico[i]<<endl;
        
    }
}
void funcionyears(int numero)
{
    vector <int> years (10);
    for (int i = 0; i<  years.size(); i++)
    {
        years [i]= Generarnumeroale(1990,2025);
        cout<<years[i]<<endl;
        
    }
}
void funcionvelocidades(int numero)
{
    vector <float> velocidades (3);
    for (int i = 0; i<  velocidades.size(); i++)
    {
        velocidades [i]= Generarnumeroale(10,300);
        cout<<velocidades[i]<<endl;
        
    }
}
void funcionpresiciondoble(int numero)
{
    vector <float> presiciondoble (10);
    for (int i = 0; i<  presiciondoble.size(); i++)
    {
        presiciondoble [i]= Generarnumeroale(1,1000);
        cout<<presiciondoble[i]<<endl;
        
    }
}
int main ()
{
    srand(time(0));
    int numero;
    cout<<"\tVOLTAJES"<<endl;
    funcionvoltajes(numero);
    cout<<"\tTEMPERATURAS"<<endl;
    funciontemperaturas(numero);
    cout<<"\tALFANUMERICOS"<<endl;
    funcionalfanumerico(numero);
    cout<<"\tAnOS"<<endl;
    funcionyears(numero);
    cout<<"\tVELOCIDAD PRECISION DOBLE"<<endl;
    funcionvelocidades(numero);
    cout<<"\tDISTANCIA PRECISION DOBLE"<<endl;
    funcionpresiciondoble(numero);
    return 0;
}
//SE QUE LAS CANTIDADES DE NUMEROS DE LISTA SON MENORES PERO ES CAMBIABLE, SOLO QUIERO MOSTRAR QUE FUNCIONA EL CODIGO PARA CADA VECTOR