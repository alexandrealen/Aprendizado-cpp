#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	// public Player player1, player2
	// Player player1 = new Player(x, y)
	// Player player2 = new Player(x, y)
	//


	// player1.andar()
	//
	// nome telefone endereco id

	int v[10];

	for(int i=0; i<10; i++)
	{
		cin >> v[i];
	}

	sort(v, v + 10);
	for(int i=9; i>=0; i--)
	{
		cout << v[i] << " ";
	}

	return 0;
}
