#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n, k, valor;
    int quadrado[500000];
    valor=0;
    cin >> n >> k;
    for(int i=0;i<n;i++)
    {
        cin >> quadrado[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int p=0; quadrado[i]>-1; p++)
        {
            quadrado[i] = quadrado[i] + quadrado[i+p];


        if(quadrado[i]==k)
        {
            valor++;
        }
        else if(quadrado[i+p+1]==0)
        {
            continue;
        }
        else if(quadrado[i]>k)
        {
            break;
        }
        }
    }
    cout << valor;
}
