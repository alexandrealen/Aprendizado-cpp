#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	int l, c;
	cout << "Defina o numero de linhas do seu tabuleiro: ";
	cin >> l;
	cout << "Defina o numero de colunas do seu tabuleiro: ";
	cin >> c;

	int tabuleiro[l+2][c+2], tab[l+2][c+2];
	for(int i=0; i<l+2; i++)
	{
		tabuleiro[i][0] = 0;
		tabuleiro[i][c+1] = 0;
	}
	for(int i=0; i<c+2; i++)
	{
		tabuleiro[0][i] = 0;
		tabuleiro[l+1][i] = 0;
	}
	for(int i=1; i<l+1; i++)
	{
		for(int j=1; j<c+1; j++)
		{
			tabuleiro[i][j] = rand() % 2;
		}
	}

	cout << "O seu tabuleiro inicial eh:" << endl;

	for(int i=1; i<l+1; i++)
	{
		for(int j=1; j<c+1; j++)
		{
			cout << tabuleiro[i][j];
		}
		cout << endl;
	}

	cout << endl << "O seu tabuleiro um passo a frente eh: " << endl;

	for(int i=0; i<l+2; i++)
	{
		for(int j=0; j<c+2; j++)
		{
			tab[i][j] = tabuleiro[i][j];
		}
	}
	for(int i=1; i<l+1; i++)
	{
		for(int j=1; j<c+1; j++)
		{
			if(tabuleiro[i][j] == 1)
			{
				if(tab[i-1][j] == 0 && tab[i+1][j] == 0 && tab[i][j-1] == 0 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 0 && tab[i][j-1] == 0 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 0 && tab[i+1][j] == 1 && tab[i][j-1] == 0 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 0 && tab[i+1][j] == 0 && tab[i][j-1] == 1 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 0 && tab[i+1][j] == 0 && tab[i][j-1] == 0 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 1 && tab[i][j-1] == 1 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 0;
				}
				cout << tabuleiro[i][j];
			}
			else if(tabuleiro[i][j] == 0)
			{
				if(tab[i-1][j] == 0 && tab[i+1][j] == 1 && tab[i][j-1] == 1 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 1;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 0 && tab[i][j-1] == 1 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 1;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 1 && tab[i][j-1] == 0 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 1;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 1 && tab[i][j-1] == 1 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 1;
				}
				cout << tabuleiro [i][j];
			}
		}
		cout << endl;
	}
////////////////////////////////////////////////////////////////////////////////////////////////////////////



	cout << endl << "O seu tabuleiro um passo a frente eh: " << endl;
	for(int i=0; i<l+2; i++)
	{
		for(int j=0; j<c+2; j++)
		{
			tab[i][j] = tabuleiro[i][j];
		}
	}
	for(int i=1; i<l+1; i++)
	{
		for(int j=1; j<c+1; j++)
		{
			if(tabuleiro[i][j] == 1)
			{
				if(tab[i-1][j] == 0 && tab[i+1][j] == 0 && tab[i][j-1] == 0 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 0 && tab[i][j-1] == 0 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 0 && tab[i+1][j] == 1 && tab[i][j-1] == 0 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 0 && tab[i+1][j] == 0 && tab[i][j-1] == 1 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 0 && tab[i+1][j] == 0 && tab[i][j-1] == 0 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 1 && tab[i][j-1] == 1 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 0;
				}
				cout << tabuleiro[i][j];
			}
			else if(tabuleiro[i][j] == 0)
			{
				if(tab[i-1][j] == 0 && tab[i+1][j] == 1 && tab[i][j-1] == 1 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 1;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 0 && tab[i][j-1] == 1 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 1;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 1 && tab[i][j-1] == 0 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 1;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 1 && tab[i][j-1] == 1 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 1;
				}
				cout << tabuleiro [i][j];
			}
		}
		cout << endl;
	}

	cout << endl << "O seu tabuleiro um passo a frente eh: " << endl;
	for(int i=0; i<l+2; i++)
	{
		for(int j=0; j<c+2; j++)
		{
			tab[i][j] = tabuleiro[i][j];
		}
	}
	for(int i=1; i<l+1; i++)
	{
		for(int j=1; j<c+1; j++)
		{
			if(tabuleiro[i][j] == 1)
			{
				if(tab[i-1][j] == 0 && tab[i+1][j] == 0 && tab[i][j-1] == 0 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 0 && tab[i][j-1] == 0 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 0 && tab[i+1][j] == 1 && tab[i][j-1] == 0 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 0 && tab[i+1][j] == 0 && tab[i][j-1] == 1 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 0 && tab[i+1][j] == 0 && tab[i][j-1] == 0 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 1 && tab[i][j-1] == 1 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 0;
				}
				cout << tabuleiro[i][j];
			}
			else if(tabuleiro[i][j] == 0)
			{
				if(tab[i-1][j] == 0 && tab[i+1][j] == 1 && tab[i][j-1] == 1 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 1;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 0 && tab[i][j-1] == 1 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 1;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 1 && tab[i][j-1] == 0 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 1;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 1 && tab[i][j-1] == 1 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 1;
				}
				cout << tabuleiro [i][j];
			}
		}
		cout << endl;
	}

	cout << endl << "O seu tabuleiro um passo a frente eh: " << endl;
	for(int i=0; i<l+2; i++)
	{
		for(int j=0; j<c+2; j++)
		{
			tab[i][j] = tabuleiro[i][j];
		}
	}
	for(int i=1; i<l+1; i++)
	{
		for(int j=1; j<c+1; j++)
		{
			if(tabuleiro[i][j] == 1)
			{
				if(tab[i-1][j] == 0 && tab[i+1][j] == 0 && tab[i][j-1] == 0 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 0 && tab[i][j-1] == 0 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 0 && tab[i+1][j] == 1 && tab[i][j-1] == 0 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 0 && tab[i+1][j] == 0 && tab[i][j-1] == 1 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 0 && tab[i+1][j] == 0 && tab[i][j-1] == 0 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 1 && tab[i][j-1] == 1 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 0;
				}
				cout << tabuleiro[i][j];
			}
			else if(tabuleiro[i][j] == 0)
			{
				if(tab[i-1][j] == 0 && tab[i+1][j] == 1 && tab[i][j-1] == 1 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 1;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 0 && tab[i][j-1] == 1 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 1;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 1 && tab[i][j-1] == 0 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 1;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 1 && tab[i][j-1] == 1 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 1;
				}
				cout << tabuleiro [i][j];
			}
		}
		cout << endl;
	}

	cout << endl << "O seu tabuleiro um passo a frente eh: " << endl;
	for(int i=0; i<l+2; i++)
	{
		for(int j=0; j<c+2; j++)
		{
			tab[i][j] = tabuleiro[i][j];
		}
	}
	for(int i=1; i<l+1; i++)
	{
		for(int j=1; j<c+1; j++)
		{
			if(tabuleiro[i][j] == 1)
			{
				if(tab[i-1][j] == 0 && tab[i+1][j] == 0 && tab[i][j-1] == 0 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 0 && tab[i][j-1] == 0 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 0 && tab[i+1][j] == 1 && tab[i][j-1] == 0 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 0 && tab[i+1][j] == 0 && tab[i][j-1] == 1 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 0 && tab[i+1][j] == 0 && tab[i][j-1] == 0 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 1 && tab[i][j-1] == 1 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 0;
				}
				cout << tabuleiro[i][j];
			}
			else if(tabuleiro[i][j] == 0)
			{
				if(tab[i-1][j] == 0 && tab[i+1][j] == 1 && tab[i][j-1] == 1 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 1;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 0 && tab[i][j-1] == 1 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 1;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 1 && tab[i][j-1] == 0 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 1;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 1 && tab[i][j-1] == 1 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 1;
				}
				cout << tabuleiro [i][j];
			}
		}
		cout << endl;
	}
	cout << endl << "O seu tabuleiro um passo a frente eh: " << endl;
	for(int i=0; i<l+2; i++)
	{
		for(int j=0; j<c+2; j++)
		{
			tab[i][j] = tabuleiro[i][j];
		}
	}
	for(int i=1; i<l+1; i++)
	{
		for(int j=1; j<c+1; j++)
		{
			if(tabuleiro[i][j] == 1)
			{
				if(tab[i-1][j] == 0 && tab[i+1][j] == 0 && tab[i][j-1] == 0 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 0 && tab[i][j-1] == 0 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 0 && tab[i+1][j] == 1 && tab[i][j-1] == 0 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 0 && tab[i+1][j] == 0 && tab[i][j-1] == 1 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 0 && tab[i+1][j] == 0 && tab[i][j-1] == 0 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 1 && tab[i][j-1] == 1 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 0;
				}
				cout << tabuleiro[i][j];
			}
			else if(tabuleiro[i][j] == 0)
			{
				if(tab[i-1][j] == 0 && tab[i+1][j] == 1 && tab[i][j-1] == 1 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 1;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 0 && tab[i][j-1] == 1 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 1;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 1 && tab[i][j-1] == 0 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 1;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 1 && tab[i][j-1] == 1 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 1;
				}
				cout << tabuleiro [i][j];
			}
		}
		cout << endl;
	}

	cout << endl << "O seu tabuleiro um passo a frente eh: " << endl;
	for(int i=0; i<l+2; i++)
	{
		for(int j=0; j<c+2; j++)
		{
			tab[i][j] = tabuleiro[i][j];
		}
	}
	for(int i=1; i<l+1; i++)
	{
		for(int j=1; j<c+1; j++)
		{
			if(tabuleiro[i][j] == 1)
			{
				if(tab[i-1][j] == 0 && tab[i+1][j] == 0 && tab[i][j-1] == 0 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 0 && tab[i][j-1] == 0 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 0 && tab[i+1][j] == 1 && tab[i][j-1] == 0 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 0 && tab[i+1][j] == 0 && tab[i][j-1] == 1 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 0 && tab[i+1][j] == 0 && tab[i][j-1] == 0 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 1 && tab[i][j-1] == 1 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 0;
				}
				cout << tabuleiro[i][j];
			}
			else if(tabuleiro[i][j] == 0)
			{
				if(tab[i-1][j] == 0 && tab[i+1][j] == 1 && tab[i][j-1] == 1 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 1;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 0 && tab[i][j-1] == 1 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 1;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 1 && tab[i][j-1] == 0 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 1;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 1 && tab[i][j-1] == 1 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 1;
				}
				cout << tabuleiro [i][j];
			}
		}
		cout << endl;
	}

	cout << endl << "O seu tabuleiro um passo a frente eh: " << endl;
	for(int i=0; i<l+2; i++)
	{
		for(int j=0; j<c+2; j++)
		{
			tab[i][j] = tabuleiro[i][j];
		}
	}
	for(int i=1; i<l+1; i++)
	{
		for(int j=1; j<c+1; j++)
		{
			if(tabuleiro[i][j] == 1)
			{
				if(tab[i-1][j] == 0 && tab[i+1][j] == 0 && tab[i][j-1] == 0 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 0 && tab[i][j-1] == 0 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 0 && tab[i+1][j] == 1 && tab[i][j-1] == 0 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 0 && tab[i+1][j] == 0 && tab[i][j-1] == 1 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 0 && tab[i+1][j] == 0 && tab[i][j-1] == 0 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 1 && tab[i][j-1] == 1 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 0;
				}
				cout << tabuleiro[i][j];
			}
			else if(tabuleiro[i][j] == 0)
			{
				if(tab[i-1][j] == 0 && tab[i+1][j] == 1 && tab[i][j-1] == 1 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 1;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 0 && tab[i][j-1] == 1 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 1;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 1 && tab[i][j-1] == 0 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 1;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 1 && tab[i][j-1] == 1 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 1;
				}
				cout << tabuleiro [i][j];
			}
		}
		cout << endl;
	}

	cout << endl << "O seu tabuleiro um passo a frente eh: " << endl;
	for(int i=0; i<l+2; i++)
	{
		for(int j=0; j<c+2; j++)
		{
			tab[i][j] = tabuleiro[i][j];
		}
	}
	for(int i=1; i<l+1; i++)
	{
		for(int j=1; j<c+1; j++)
		{
			if(tabuleiro[i][j] == 1)
			{
				if(tab[i-1][j] == 0 && tab[i+1][j] == 0 && tab[i][j-1] == 0 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 0 && tab[i][j-1] == 0 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 0 && tab[i+1][j] == 1 && tab[i][j-1] == 0 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 0 && tab[i+1][j] == 0 && tab[i][j-1] == 1 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 0 && tab[i+1][j] == 0 && tab[i][j-1] == 0 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 1 && tab[i][j-1] == 1 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 0;
				}
				cout << tabuleiro[i][j];
			}
			else if(tabuleiro[i][j] == 0)
			{
				if(tab[i-1][j] == 0 && tab[i+1][j] == 1 && tab[i][j-1] == 1 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 1;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 0 && tab[i][j-1] == 1 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 1;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 1 && tab[i][j-1] == 0 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 1;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 1 && tab[i][j-1] == 1 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 1;
				}
				cout << tabuleiro [i][j];
			}
		}
		cout << endl;
	}

	cout << endl << "O seu tabuleiro um passo a frente eh: " << endl;
	for(int i=0; i<l+2; i++)
	{
		for(int j=0; j<c+2; j++)
		{
			tab[i][j] = tabuleiro[i][j];
		}
	}
	for(int i=1; i<l+1; i++)
	{
		for(int j=1; j<c+1; j++)
		{
			if(tabuleiro[i][j] == 1)
			{
				if(tab[i-1][j] == 0 && tab[i+1][j] == 0 && tab[i][j-1] == 0 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 0 && tab[i][j-1] == 0 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 0 && tab[i+1][j] == 1 && tab[i][j-1] == 0 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 0 && tab[i+1][j] == 0 && tab[i][j-1] == 1 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 0 && tab[i+1][j] == 0 && tab[i][j-1] == 0 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 1 && tab[i][j-1] == 1 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 0;
				}
				cout << tabuleiro[i][j];
			}
			else if(tabuleiro[i][j] == 0)
			{
				if(tab[i-1][j] == 0 && tab[i+1][j] == 1 && tab[i][j-1] == 1 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 1;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 0 && tab[i][j-1] == 1 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 1;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 1 && tab[i][j-1] == 0 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 1;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 1 && tab[i][j-1] == 1 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 1;
				}
				cout << tabuleiro [i][j];
			}
		}
		cout << endl;
	}

	cout << endl << "O seu tabuleiro um passo a frente eh: " << endl;
	for(int i=0; i<l+2; i++)
	{
		for(int j=0; j<c+2; j++)
		{
			tab[i][j] = tabuleiro[i][j];
		}
	}
	for(int i=1; i<l+1; i++)
	{
		for(int j=1; j<c+1; j++)
		{
			if(tabuleiro[i][j] == 1)
			{
				if(tab[i-1][j] == 0 && tab[i+1][j] == 0 && tab[i][j-1] == 0 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 0 && tab[i][j-1] == 0 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 0 && tab[i+1][j] == 1 && tab[i][j-1] == 0 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 0 && tab[i+1][j] == 0 && tab[i][j-1] == 1 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 0 && tab[i+1][j] == 0 && tab[i][j-1] == 0 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 1 && tab[i][j-1] == 1 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 0;
				}
				cout << tabuleiro[i][j];
			}
			else if(tabuleiro[i][j] == 0)
			{
				if(tab[i-1][j] == 0 && tab[i+1][j] == 1 && tab[i][j-1] == 1 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 1;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 0 && tab[i][j-1] == 1 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 1;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 1 && tab[i][j-1] == 0 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 1;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 1 && tab[i][j-1] == 1 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 1;
				}
				cout << tabuleiro [i][j];
			}
		}
		cout << endl;
	}

	cout << endl << "O seu tabuleiro um passo a frente eh: " << endl;
	for(int i=0; i<l+2; i++)
	{
		for(int j=0; j<c+2; j++)
		{
			tab[i][j] = tabuleiro[i][j];
		}
	}
	for(int i=1; i<l+1; i++)
	{
		for(int j=1; j<c+1; j++)
		{
			if(tabuleiro[i][j] == 1)
			{
				if(tab[i-1][j] == 0 && tab[i+1][j] == 0 && tab[i][j-1] == 0 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 0 && tab[i][j-1] == 0 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 0 && tab[i+1][j] == 1 && tab[i][j-1] == 0 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 0 && tab[i+1][j] == 0 && tab[i][j-1] == 1 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 0 && tab[i+1][j] == 0 && tab[i][j-1] == 0 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 1 && tab[i][j-1] == 1 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 0;
				}
				cout << tabuleiro[i][j];
			}
			else if(tabuleiro[i][j] == 0)
			{
				if(tab[i-1][j] == 0 && tab[i+1][j] == 1 && tab[i][j-1] == 1 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 1;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 0 && tab[i][j-1] == 1 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 1;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 1 && tab[i][j-1] == 0 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 1;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 1 && tab[i][j-1] == 1 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 1;
				}
				cout << tabuleiro [i][j];
			}
		}
		cout << endl;
	}

	cout << endl << "O seu tabuleiro um passo a frente eh: " << endl;
	for(int i=0; i<l+2; i++)
	{
		for(int j=0; j<c+2; j++)
		{
			tab[i][j] = tabuleiro[i][j];
		}
	}
	for(int i=1; i<l+1; i++)
	{
		for(int j=1; j<c+1; j++)
		{
			if(tabuleiro[i][j] == 1)
			{
				if(tab[i-1][j] == 0 && tab[i+1][j] == 0 && tab[i][j-1] == 0 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 0 && tab[i][j-1] == 0 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 0 && tab[i+1][j] == 1 && tab[i][j-1] == 0 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 0 && tab[i+1][j] == 0 && tab[i][j-1] == 1 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 0 && tab[i+1][j] == 0 && tab[i][j-1] == 0 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 1 && tab[i][j-1] == 1 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 0;
				}
				cout << tabuleiro[i][j];
			}
			else if(tabuleiro[i][j] == 0)
			{
				if(tab[i-1][j] == 0 && tab[i+1][j] == 1 && tab[i][j-1] == 1 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 1;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 0 && tab[i][j-1] == 1 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 1;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 1 && tab[i][j-1] == 0 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 1;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 1 && tab[i][j-1] == 1 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 1;
				}
				cout << tabuleiro [i][j];
			}
		}
		cout << endl;
	}

	cout << endl << "O seu tabuleiro um passo a frente eh: " << endl;
	for(int i=0; i<l+2; i++)
	{
		for(int j=0; j<c+2; j++)
		{
			tab[i][j] = tabuleiro[i][j];
		}
	}
	for(int i=1; i<l+1; i++)
	{
		for(int j=1; j<c+1; j++)
		{
			if(tabuleiro[i][j] == 1)
			{
				if(tab[i-1][j] == 0 && tab[i+1][j] == 0 && tab[i][j-1] == 0 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 0 && tab[i][j-1] == 0 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 0 && tab[i+1][j] == 1 && tab[i][j-1] == 0 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 0 && tab[i+1][j] == 0 && tab[i][j-1] == 1 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 0 && tab[i+1][j] == 0 && tab[i][j-1] == 0 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 1 && tab[i][j-1] == 1 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 0;
				}
				cout << tabuleiro[i][j];
			}
			else if(tabuleiro[i][j] == 0)
			{
				if(tab[i-1][j] == 0 && tab[i+1][j] == 1 && tab[i][j-1] == 1 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 1;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 0 && tab[i][j-1] == 1 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 1;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 1 && tab[i][j-1] == 0 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 1;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 1 && tab[i][j-1] == 1 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 1;
				}
				cout << tabuleiro [i][j];
			}
		}
		cout << endl;
	}

	cout << endl << "O seu tabuleiro um passo a frente eh: " << endl;
	for(int i=0; i<l+2; i++)
	{
		for(int j=0; j<c+2; j++)
		{
			tab[i][j] = tabuleiro[i][j];
		}
	}
	for(int i=1; i<l+1; i++)
	{
		for(int j=1; j<c+1; j++)
		{
			if(tabuleiro[i][j] == 1)
			{
				if(tab[i-1][j] == 0 && tab[i+1][j] == 0 && tab[i][j-1] == 0 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 0 && tab[i][j-1] == 0 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 0 && tab[i+1][j] == 1 && tab[i][j-1] == 0 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 0 && tab[i+1][j] == 0 && tab[i][j-1] == 1 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 0 && tab[i+1][j] == 0 && tab[i][j-1] == 0 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 1 && tab[i][j-1] == 1 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 0;
				}
				cout << tabuleiro[i][j];
			}
			else if(tabuleiro[i][j] == 0)
			{
				if(tab[i-1][j] == 0 && tab[i+1][j] == 1 && tab[i][j-1] == 1 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 1;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 0 && tab[i][j-1] == 1 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 1;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 1 && tab[i][j-1] == 0 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 1;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 1 && tab[i][j-1] == 1 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 1;
				}
				cout << tabuleiro [i][j];
			}
		}
		cout << endl;
	}

	cout << endl << "O seu tabuleiro um passo a frente eh: " << endl;
	for(int i=0; i<l+2; i++)
	{
		for(int j=0; j<c+2; j++)
		{
			tab[i][j] = tabuleiro[i][j];
		}
	}
	for(int i=1; i<l+1; i++)
	{
		for(int j=1; j<c+1; j++)
		{
			if(tabuleiro[i][j] == 1)
			{
				if(tab[i-1][j] == 0 && tab[i+1][j] == 0 && tab[i][j-1] == 0 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 0 && tab[i][j-1] == 0 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 0 && tab[i+1][j] == 1 && tab[i][j-1] == 0 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 0 && tab[i+1][j] == 0 && tab[i][j-1] == 1 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 0 && tab[i+1][j] == 0 && tab[i][j-1] == 0 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 1 && tab[i][j-1] == 1 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 0;
				}
				cout << tabuleiro[i][j];
			}
			else if(tabuleiro[i][j] == 0)
			{
				if(tab[i-1][j] == 0 && tab[i+1][j] == 1 && tab[i][j-1] == 1 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 1;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 0 && tab[i][j-1] == 1 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 1;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 1 && tab[i][j-1] == 0 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 1;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 1 && tab[i][j-1] == 1 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 1;
				}
				cout << tabuleiro [i][j];
			}
		}
		cout << endl;
	}

	cout << endl << "O seu tabuleiro um passo a frente eh: " << endl;
	for(int i=0; i<l+2; i++)
	{
		for(int j=0; j<c+2; j++)
		{
			tab[i][j] = tabuleiro[i][j];
		}
	}
	for(int i=1; i<l+1; i++)
	{
		for(int j=1; j<c+1; j++)
		{
			if(tabuleiro[i][j] == 1)
			{
				if(tab[i-1][j] == 0 && tab[i+1][j] == 0 && tab[i][j-1] == 0 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 0 && tab[i][j-1] == 0 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 0 && tab[i+1][j] == 1 && tab[i][j-1] == 0 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 0 && tab[i+1][j] == 0 && tab[i][j-1] == 1 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 0 && tab[i+1][j] == 0 && tab[i][j-1] == 0 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 1 && tab[i][j-1] == 1 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 0;
				}
				cout << tabuleiro[i][j];
			}
			else if(tabuleiro[i][j] == 0)
			{
				if(tab[i-1][j] == 0 && tab[i+1][j] == 1 && tab[i][j-1] == 1 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 1;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 0 && tab[i][j-1] == 1 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 1;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 1 && tab[i][j-1] == 0 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 1;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 1 && tab[i][j-1] == 1 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 1;
				}
				cout << tabuleiro [i][j];
			}
		}
		cout << endl;
	}

	cout << endl << "O seu tabuleiro um passo a frente eh: " << endl;
	for(int i=0; i<l+2; i++)
	{
		for(int j=0; j<c+2; j++)
		{
			tab[i][j] = tabuleiro[i][j];
		}
	}
	for(int i=1; i<l+1; i++)
	{
		for(int j=1; j<c+1; j++)
		{
			if(tabuleiro[i][j] == 1)
			{
				if(tab[i-1][j] == 0 && tab[i+1][j] == 0 && tab[i][j-1] == 0 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 0 && tab[i][j-1] == 0 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 0 && tab[i+1][j] == 1 && tab[i][j-1] == 0 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 0 && tab[i+1][j] == 0 && tab[i][j-1] == 1 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 0 && tab[i+1][j] == 0 && tab[i][j-1] == 0 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 1 && tab[i][j-1] == 1 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 0;
				}
				cout << tabuleiro[i][j];
			}
			else if(tabuleiro[i][j] == 0)
			{
				if(tab[i-1][j] == 0 && tab[i+1][j] == 1 && tab[i][j-1] == 1 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 1;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 0 && tab[i][j-1] == 1 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 1;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 1 && tab[i][j-1] == 0 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 1;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 1 && tab[i][j-1] == 1 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 1;
				}
				cout << tabuleiro [i][j];
			}
		}
		cout << endl;
	}

	cout << endl << "O seu tabuleiro um passo a frente eh: " << endl;
	for(int i=0; i<l+2; i++)
	{
		for(int j=0; j<c+2; j++)
		{
			tab[i][j] = tabuleiro[i][j];
		}
	}
	for(int i=1; i<l+1; i++)
	{
		for(int j=1; j<c+1; j++)
		{
			if(tabuleiro[i][j] == 1)
			{
				if(tab[i-1][j] == 0 && tab[i+1][j] == 0 && tab[i][j-1] == 0 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 0 && tab[i][j-1] == 0 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 0 && tab[i+1][j] == 1 && tab[i][j-1] == 0 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 0 && tab[i+1][j] == 0 && tab[i][j-1] == 1 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 0 && tab[i+1][j] == 0 && tab[i][j-1] == 0 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 0;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 1 && tab[i][j-1] == 1 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 0;
				}
				cout << tabuleiro[i][j];
			}
			else if(tabuleiro[i][j] == 0)
			{
				if(tab[i-1][j] == 0 && tab[i+1][j] == 1 && tab[i][j-1] == 1 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 1;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 0 && tab[i][j-1] == 1 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 1;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 1 && tab[i][j-1] == 0 && tab[i][j+1] == 1)
				{
					tabuleiro[i][j] = 1;
				}
				if(tab[i-1][j] == 1 && tab[i+1][j] == 1 && tab[i][j-1] == 1 && tab[i][j+1] == 0)
				{
					tabuleiro[i][j] = 1;
				}
				cout << tabuleiro [i][j];
			}
		}
		cout << endl;
	}






	return 0;
}
// http://dojopuzzles.com/problemas/exibe/jogo-da-vida/
