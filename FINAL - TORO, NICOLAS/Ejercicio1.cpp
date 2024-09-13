#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> numeros;
    int n, aux;

    for(int i=0; i<=4; i++)
    {
        cout<<"Ingresar numero: ";
        cin>>n;
        numeros.push_back(n);
    }

    for(int i=0; i<3; i++)
    {
        for(int j=i+1; j<4; j++)
        {
            if(numeros[i]<numeros[j])
               {
                   aux = numeros[i];
                   numeros[i] = numeros[j];
                   numeros[j] = aux;
               }
        }
    }
    cout<<endl;
    cout<<"\nNumeros ordenados:\n";
    for(int value : numeros)
    {
        cout<<value<<" ";
    }

    return 0;
}
