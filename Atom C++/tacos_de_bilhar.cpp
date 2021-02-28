#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n, contador = 0;
	cin >> n;
	int consultas[n];

	for(int i=0; i<n; i++)
	{
		cin >> consultas[i];
	}

	sort(consultas, consultas+n);

	for(int i=0; i<n; i++)
	{
		contador += 2;
		if(i<n-1 && consultas[i] == consultas[i+1]) i++;

	}
	cout << contador;
	return 0;
}
