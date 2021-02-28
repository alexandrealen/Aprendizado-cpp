#include <iostream>
using namespace std;

int main()
{

	int n, esquerda=0, direita=0;
	cin >> n;
	bool achouZeroDireita = false, achouZeroEsquerda = false;
	int fita[n], fitai[n];
	for(int i=0; i<n; i++)
	{
		cin >> fita[i];
		fitai[i] = fita[i];
	}

	for(int i=0; i<n; i++)
	{
		if(fita[i] == 0) continue;
		if(fita[i] == -1)
		{
			//verificacao para a direita
			for(int j=i; j<n; j++)
			{
				if(fitai[j]==-1)
				{
					direita++;
				}
				else break;
			}
			for(int j=i+1; j<n; j++)
			{
				if(fitai[j] == 0)
				{
					achouZeroDireita = true;
				}
			}
			if(achouZeroDireita == false) direita = 10000;
			achouZeroDireita = false;

			//andar para esquerda
			for(int j=i; j>=0; j--)
			{
				if(fitai[j]==-1)
				{
					esquerda++;
				}
				else break;
			}
			for(int j=i-1; j>=0; j--)
			{
				if(fitai[j] == 0)
				{
					achouZeroEsquerda = true;
				}
			}
			if(achouZeroEsquerda == false) esquerda = 10000;
			achouZeroEsquerda = false;
			if(direita>esquerda)
			{
				if(esquerda>9) esquerda = 9;
				fita[i] = esquerda;
			}
			else
			{
				if(direita>9) direita = 9;
				fita[i] = direita;
			}
			direita = 0;
			esquerda = 0;
		}
	}

	for(int i=0; i<n; i++)
	{
		cout << fita[i] << " ";
	}

	return 0;
}

// https://neps.academy/lesson/138
