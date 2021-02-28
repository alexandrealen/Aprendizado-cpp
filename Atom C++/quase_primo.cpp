#include <iostream>
using namespace std;

int main()
{

	int n, k, contador = 0, contadorTemp = 0;

	cin >> n >> k;
	int divisores[k];

	for(int i=0; i<k; i++)
	{
		cin >> divisores[i];
	}

	for(int i=1; i<=n; i++)
	{
		for(int j=0; j<k; j++)
		{
			if(i%divisores[j] == 0) break;
			if(i%divisores[j] != 0)
			{
				contadorTemp++;
			}
		}
		if(contadorTemp == k)
		{
			contador++;
		}
		contadorTemp = 0;

	}
	cout << contador;


	return 0;
}
