#include <iostream>
#include<cstdlib>
#include <ctime>
#include <vector>
#include <string>

using namespace std;
int generarnuemroaleatorio (int min, int max)
{
    return rand() % (max - min + 1)+min;
}
void mostrarnombrescompletos (vector <string> nombres, int n)
{
    for (int i = 0; i < n; i++)
    {
        
        cout<<nombres[generarnuemroaleatorio(0,9)]<<" ";
    }

}
void ordenarnombres (vector <string> nombres, int n)
{
    for (int i = 0; i < n -1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (nombres[j]>nombres[j+1] )
            {
                swap(nombres[j],nombres[j+1]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<nombres[i]<<" ";
    }
}
int main()
{
    srand(time(NULL));
    int n = 0;
    cout<<"Ingrese el numero de nombres: ";cin>>n;
    vector <string> nombres = {"Rodrigo","Daniel","Tedy","Amilcar","David","Geraldine","Joel","Marcelo","Roberto","Agustin"};
    mostrarnombrescompletos(nombres,n);
    cout<<endl;
    ordenarnombres(nombres, n);

    return 0;
}