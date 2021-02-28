#include <iostream>
using namespace std;

int main()
{

	string risada, risadaVogal, risadaInvertida;

	cin >> risada;

	for(int i=0; i<risada.size(); i++)
	{
		if(risada[i] == 'a') risadaVogal +="a";
		else if(risada[i] == 'e') risadaVogal +="e";
		else if(risada[i] == 'i') risadaVogal +="i";
		else if(risada[i] == 'o') risadaVogal +="o";
		else if(risada[i] == 'u') risadaVogal +="u";
	}

	for(int i=(risadaVogal.size())-1; i>=0; i--)
	{
		risadaInvertida += risadaVogal[i];
	}

	if(risadaVogal == risadaInvertida) cout << "S";
	else cout << "N";


	return 0;
}
// https://neps.academy/lesson/146
