#include <iostream>
using namespace std;

int main()
{

	int h, p, f, d;
	char pistachar[16];

	cin >> h >> p >> f >> d;

	pistachar[h] = 'h';
	pistachar[p] = 'p';
	pistachar[f] = 'f';

	if(d == -1)
	{
		while(pistachar[f] != pistachar[p] && pistachar[f] != pistachar[h])
		{
			f--;
			pistachar[f] = 'f';
			if(f == -1) f = 15;
		}
		if(pistachar[f] == pistachar[p]) cout << "N";
		else cout << "S";
	}
	else
	{
		while(pistachar[f] != pistachar[p] && pistachar[f] != pistachar[h])
		{
			f++;
			pistachar[f] = 'f';
			if(f == 16) f = 0;
		}
		if(pistachar[f] == pistachar[p]) cout << "N";
		else cout << "S";
	}

	return 0;
}
