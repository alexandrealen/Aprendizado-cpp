#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

	int n, contador = 0;

	cin >> n;

	int preco[n];

	for(int i=0; i<n; i++)
	{
		cin >> preco[i];
	}

	sort(preco, preco+n);

	if(n%3 == 0)
	{
		for(int i=0; i<n; i++)
		{
			if(i>=n) break;
			contador += preco[i+1];
			contador += preco[i+2];
			i++;
			i++;
		}
		cout << contador;
	}
	else if(n%3 == 1)
	{
		contador += preco[0];
		for(int i=1; i<n; i++)
		{
			if(i>=n) break;
			contador += preco[i+1];
			contador += preco[i+2];
			i++;
			i++;
		}
		cout << contador;
	}
	else if(n%3 == 2)
	{
		contador += preco[0];
		contador += preco[1];
		for(int i=2; i<n; i++)
		{
			if(i>=n) break;
			contador += preco[i+1];
			contador += preco[i+2];
			i++;
			i++;
		}
		cout << contador;
	}


	return 0;
}
