#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

	int al[2], n;
	cin >> al[0] >> al[1] >> n;

	sort(al, al+2);
	int satifaz = -1, tempsatifaz = -1, resto = 1000,  tempresto = 0;
	for(int i=1; i<=n; i++)
	{
		int v[2];
		cin >> v[0] >> v[1];
		sort(v, v+2);

		if(v[0]>=al[0] && v[1]>=al[1])
		{
			tempsatifaz = i;
			tempresto = ((v[0]-al[0]) + (v[1]-al[1]));
		}
		if(tempresto < resto)
		{
			satifaz = tempsatifaz;
			resto = tempresto;
		}

	}

	cout << satifaz;

	return 0;
}
