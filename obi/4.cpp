#include <iostream>
#include <cmath>
using namespace std;

struct Barraca
{
	int x;
	int y;
	double hypot;
};
int main()
{
	bool podeandar = true;

	int n, x, y, contador = 0;
	cin >> n;
	struct Barraca barraca[n];
	double max = 0, aux = 0;
	int barracafoda, barracafodatemp;


	for(int i=0; i<n; i++)
	{
		cin >> x >> y;
		barraca[i].x = x;
		barraca[i].y = y;
		barraca[i].hypot = sqrt((x*x) + (y*y));
	}

	for(int i=0; i<n; i++)
	{
		if(barraca[i].hypot >= 0) aux = barraca[i].hypot;
		else aux = -(barraca[i].hypot);
		if(aux > max)
		{
			max = aux;
			barracafoda = i;
			continue;
		}
	}
	aux = 0;
	max = 0;
	double c1, c2;

	barracafoda = barracafodatemp;
	while(podeandar)
	{
		for(int i=0; i<n; i++)
		{
			if(i == barracafodatemp) continue;
			c1 = barraca[i].y - barraca[barracafodatemp].y;
			c2 = barraca[i].x - barraca[barracafodatemp].x;

			aux = sqrt((c1*c1)+(c2*c2));
			cout << endl << "hipotenusa barraca " << i << " com " << barracafoda << " eh " << aux << endl;
			if(aux < 0) aux = -aux;

			if(aux > max)
			{
				cout << "mudou o max" << endl;
				max = aux;
				barracafodatemp = i;
			}
		}
		if(barracafoda == barracafodatemp)
		{
			podeandar = false;
			break;
		}
		contador++;
		barracafoda = barracafodatemp;
	}

	cout << contador;










	return 0;
}
