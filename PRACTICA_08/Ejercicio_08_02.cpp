//Materia: Programacion I, Paralelo 4
//Autor: Israel Rodrigo Chavez Villacorta
//Carrera: Ingenieria de Sistemas
//Fecha de Creacion: 05/10/2026
#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using namespace std;

void contadores (vector<char>&x,int &contM,int &contm,int &contd,int &contc)
{
    for (int i =0; i< x.size(); i++)
    {
        if (isupper(x[i]))
        {
            contM++;
        }
        if (islower(x[i]))
        {
            contm++;
        }
        if (isdigit(x[i]))
        {
            contd++;
        }
        if (ispunct(x[i]))
        {
            contc++;
        }
    }
    cout<<"Mayusculas: "<<contM<<endl;
    cout<<"Minusculas: "<<contm<<endl;
    cout<<"Digitos: "<<contd<<endl;
    cout<<"Caracteres: "<<contc<<endl;
} 
void imprimir (vector<char>&x,int contM,int contm,int contd, int contc)
{
    if (x.size()>=8)
    {
        cout<<"Tiene almenos 8 caracteres"<<endl;
        if (contM>0)
        {
            cout<<"Tiene al menos una mayuscula"<<endl;
            if (contm>0)
            {
                cout<<"Tiene al menos una minuscula"<<endl;
                if (contd>0)
                {
                    cout<<"Tiene al menos un digito"<<endl;
                    if (contc>0)
                {
                    cout<<"Tiene al menos un caracter especial"<<endl;
                    cout<<"CONTRASENA SEGURA";
                }else{
                    cout<<"No tiene caracter especial"<<endl;
                    cout<<"CONTRASENA VULNERABLE";
                }
                }else{
                    cout<<"No tiene digitos"<<endl;
                    cout<<"CONTRASENA VULNERABLE";
                }
            }else{
                cout<<"No tiene minusculas"<<endl;
                cout<<"CONTRASENA VULNERABLE";
            }
        }else{
            cout<<"No tiene mayusculas"<<endl;
            cout<<"CONTRASENA VULNERABLE";
        }
    }else{
        cout<<"CONTRASENA VULNERABLE";
    }
}


int main (){
    string contra;
    int contM=0;
    int contm=0;
    int contd=0;
    int contc=0;
    cout<<"ingrese contrasena: ";
    getline(cin,contra);
    vector<char> contrasena(contra.begin(), contra.end());
    contadores (contrasena,contM,contm,contd,contc);
    imprimir (contrasena,contM, contm,contd,contc);    
    return 0;
}