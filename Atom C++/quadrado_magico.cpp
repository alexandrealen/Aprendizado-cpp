#include <iostream>
using namespace std;

int main()
{

	int n, somaLinhas, somaColunas, somaDiagonais = 0, temp = 0;
	cin >> n;
	int quadrado [n][n];
	bool erro = false;

	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			cin >> quadrado[i][j];
		}
	}

	// lendo a soma das colunas
	for(int i=0; i<n; i++)
	{
		temp += quadrado[0][i];
	}
	for(int i=0; i<n; i++)
	{
		somaColunas = 0;
		for(int j=0; j<n; j++)
		{
			somaColunas += quadrado[i][j];
		}
		if(somaColunas == temp)
		{
			continue;
		}
		else erro = true;
	}
	temp = 0;

	// lendo a soma das linhas
	for(int i=0; i<n; i++)
	{
		temp += quadrado[i][0];

	}
	for(int i=0; i<n; i++)
	{
		somaLinhas = 0;
		for(int j=0; j<n; j++)
		{
			somaLinhas += quadrado[j][i];
		}
		if(somaLinhas == temp)
		{
			continue;
		}
		else erro = true;
	}
	temp = 0;

	//lendo a soma das diagonais

	for(int i=0; i<n; i++)
	{
		temp += quadrado[i][i];
	}
	for(int i=0; i<n; i++)
	{
		somaDiagonais += quadrado[i][i];
	}
	if(somaDiagonais != temp) erro = true;
	temp = 0;
	somaDiagonais = 0;

	int j = n-1;
	for(int i=0; i<n; i++)
	{
		temp += quadrado[i][j];
		j--;
	}

	j = n-1;
	for(int i=0; i<n; i++)
	{
		somaDiagonais += quadrado[i][j];
		j--;
	}
	if(somaDiagonais != temp) erro = true;

	int menosum = -1;



	if(erro == false) cout << somaColunas;
	else cout << menosum;


	return 0;
}
