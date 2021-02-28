#include <iostream>

using namespace std

int void main()
{
    int n, contador = 1, soma, somaR;
    cin >> n;
    int v[n];

    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }

    for(int i=0; i<n; i++)
    {
        if(i<n-1 && v[i] == v[i++])
        {
            contador++;
            soma++;
        }
        else
        {
            contador = 1;
        }
    }

}
