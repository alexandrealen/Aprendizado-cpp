#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio( false ); cin.tie( 0 ); //otimizacao do cin
	int n, k, contador = 0, soma = 0;

	cin >> n >> k;
	int linha[n];

	for(int i=0; i<n; i++)
    {
        cin >> linha[i];
    }


    for(int i=0; i<n; i++)
    {
	    soma = 0;
	    if(linha[i] > k) continue; //otimizador

	    for(int j=0; j<=n-i; j++)
	    {
		    if(soma > k) break; //otimizador
		    else if(linha [i+j] > k) break; //otimizador

		    if(linha[i+j] + soma == k)
		    {
			    contador++;
		    }
		    soma += linha[i+j];
	    }
    }


    cout << contador;
	return 0;
}
