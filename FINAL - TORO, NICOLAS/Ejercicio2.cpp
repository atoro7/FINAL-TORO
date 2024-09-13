#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int matriz [3][3];

    int aux;

    vector <int> numeros;

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<"Ingresar valor de matriz["<<i<<"]["<<j<<"]";
            cin>> matriz[i][j];
        }
    }

    for(int i=0; i<=2; i++)
    {
        for(int j=0; j<=2; j++)
        {
            cout<<matriz[i][j]<<" ";
            numeros.push_back(matriz[i][j]);
        }
        cout<<endl;
    }

    for(int i=0; i<2; i++)
    {
        for(int j=i+1; j<=2; j++)
        {
            if(numeros[i]>numeros[j])
            {
                aux = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = aux;
            }
        }
    }

    for(int i=0; i<=8; i++)
    {
        cout<<numeros[i]<<" ";
    }

    return 0;
}
